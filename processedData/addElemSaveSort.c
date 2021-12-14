#include <stdlib.h>

#include "../h_files/sort_funcs.h"
#include "../h_files/my_lib.h"

detail **addElemSaveSort(detail **data, int *datasize, int *sortType){
    data = dataMemAdd(data, datasize, 1);
    int include;
    detail *newData = NULL;
    newData = newElement();
    data[*datasize-1] = newData;
    if (!(*sortType)) *sortType = 1;
    shakerSort(data, *datasize, *sortType);
    return data;
}