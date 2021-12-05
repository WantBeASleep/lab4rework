/*
sortType
1 - id
2 - name
3 - counter
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../h_files/struct.h"
#include "../h_files/my_lib.h"
#include "../h_files/output_funcs.h"

detail* selectionSort(detail *Data, int DataSize, int sortType){
    for (int i=1; i<DataSize - 1; i++){
        int minElemIdx = i;

        for (int j=i; j<DataSize; j++){
            if (comparator(&(Data[minElemIdx]), &(Data[j]), sortType)) minElemIdx = j;
        }

        printf("minElement found - %d\n", minElemIdx);

        int includeIdx=0, k=0;
        while (comparator(&(Data[minElemIdx]), &(Data[k]), sortType) && k<i){
            k++;
        }
        includeIdx = k;

        printf("includeIdx found - %d\n", includeIdx);        

        detail *minElemCpy = NULL;
        minElemCpy = (detail *)malloc(sizeof(detail));
        cpyElemStruct(minElemCpy, &(Data[minElemIdx]));

        printf("Min copy confirm\n");
        outputDataConsole(minElemCpy, 1);

        printf("Input to delFunc:\nDataSize - %d\nminElemIdx - %d\n", DataSize, minElemIdx);

        Data = deleteElemByIndex(Data, &DataSize, minElemIdx);

        printf("deleted\n");
        outputDataConsole(Data, DataSize);

        Data = includeElemByIndex(Data, minElemCpy, &DataSize, includeIdx);

        freeNamesFields(minElemCpy, 1);
        free(minElemCpy);
    }
    return Data;
}
