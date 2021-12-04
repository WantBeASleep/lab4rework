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

detail* shakerSort(detail *Data, int DataSize, int sortType){
    int sortFlag = 0;
    int k = 0; // итерация цикла
    while (!sortFlag){
        sortFlag = 1; // 1 - sort, 0 - ne_sort
        for (int idx = 0 + k; idx < DataSize - k - 1; idx++){
            if (comparator(&(Data[idx]), &(Data[idx + 1]), sortType)) {
                sortFlag = 0;
                exchangeStructElems(&(Data[idx]), &(Data[idx + 1]));
            }
        }
        if (sortFlag) break;
        for (int idx = DataSize - k - 2; idx > 0 + k; idx--){
            if (comparator(&(Data[idx - 1]), &(Data[idx]), sortType)) {
                sortFlag = 0;
                exchangeStructElems(&(Data[idx - 1]), &(Data[idx]));
            }
        }
        k++;
    }
    return Data;
}
