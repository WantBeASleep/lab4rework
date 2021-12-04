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

detail* selectionSort(detail *Data, int DataSize, int sortType){
    for (int i=1; i<DataSize - 1; i++){
        int memoryidx = i;

        for (int j=i; j<DataSize; j++){
            if (comparator(&(Data[memoryidx]), &(Data[j]), sortType)) memoryidx = j;
        }

        int j=0;
        while (comparator(&(Data[memoryidx]), &(Data[j]), sortType)) j++;
        
        detail *tmp = NULL;
        tmp = (detail *)malloc(sizeof(detail));
        cpyElemStruct(tmp, &(Data[memoryidx]));

        deleteElemByIndex(Data, &DataSize, memoryidx);
        includeElemByIndex(Data, tmp, &DataSize, j);
    }
    return Data;
}
