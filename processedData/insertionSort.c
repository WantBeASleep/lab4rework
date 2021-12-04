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

detail* insertionSort(detail *Data, int DataSize, int sortType){
    for (int i=1; i<DataSize; i++){
        int k = 0;
        while (comparator(&(Data[i]), &(Data[k]), sortType)) k++;
        detail *tmp = NULL;
        tmp = (detail *)malloc(sizeof(detail));
        cpyElemStruct(tmp, &(Data[i]));
        for (int j=i; j>k; j--){
            cpyElemStruct(&(Data[j]), &(Data[j-1]));
        }
        cpyElemStruct(&(Data[k]), tmp);
        freeNamesFields(tmp, 1);
        free(tmp);
    }
    return Data;
}
