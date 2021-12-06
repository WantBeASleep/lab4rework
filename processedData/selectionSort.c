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
    for (int i=0; i<DataSize - 1; i++){
        int minElemIdx = i;

        //printf("TEST\ni - %d\n", i);

        for (int j=i; j<DataSize; j++){
            if (comparator(&(Data[minElemIdx]), &(Data[j]), sortType)) minElemIdx = j;
            //printf("j - %d\n", j);
        }

        if (!(i == minElemIdx)) exchangeStructElems(&(Data[i]), &(Data[minElemIdx]));
    }
    return Data;
}
