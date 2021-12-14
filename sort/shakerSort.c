/*
sortType
1 - id
2 - name
3 - counter
*/

#include <stdlib.h>

#include "../h_files/struct.h"
#include "../h_files/my_lib.h"

void shakerSort(detail **data, int datasize, int sortType){
    int sortFlag = 0;
    int k = 0;
    while (!sortFlag){
        sortFlag = 1; // 1 - sort, 0 - ne_sort
        for (int idx = 0 + k; idx < datasize - k - 1; idx++){
            if (comparator(data[idx], data[idx + 1], sortType)) {
                sortFlag = 0;
                exchangeStructElems(data, idx, idx + 1);
            }
        }
        if (sortFlag) break;
        for (int idx = datasize - k - 2; idx > 0 + k; idx--){
            if (comparator(data[idx - 1], data[idx], sortType)) {
                sortFlag = 0;
                exchangeStructElems(data, idx - 1, idx);
            }
        }
        k++;
    }
    return;
}