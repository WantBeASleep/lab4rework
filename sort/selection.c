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

void selectionSort(detail **data, int dataSize, int sortType){
    for (int i=0; i<dataSize - 1; i++){
        int minElemIdx = i;
        for (int j=i; j<dataSize; j++){
            if (comparator(data[minElemIdx], data[j], sortType)) minElemIdx = j;
        }
        if (!(i == minElemIdx)) exchangeStructElems(data , i, minElemIdx);
    }
    return;
}
