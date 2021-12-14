#include <stdlib.h>
#include <stdio.h>

#include "../h_files/my_lib.h"

detail **addElemByIndex(detail **data, int *datasize, int *sortType){
    *sortType = 0;
    data = dataMemAdd(data, datasize, 1);
    int include;
    detail *newData = NULL;
    newData = newElement();
    printf("Index of new - ");
    scanf("%d", &include);

    for (int i=*datasize-1; i > include; i--){
        exchangeStructElems(data, i-1, i);
    }

    data[include] = newData;
    return data;
}