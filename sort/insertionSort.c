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

void insertionSort(detail **data, int dataSize, int sortType){
    for (int i=1; i<dataSize; i++){
        int k = 0;
        while (comparator(data[i], data[k], sortType)) k++;
        for (int j=i; j>k; j--){
            exchangeStructElems(data, j, j-1);
        }
    }
    return;
}