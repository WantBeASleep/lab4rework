#include <stdio.h>
#include <stdlib.h>

#include "../h_files/struct.h"
#include "../h_files/my_lib.h"
#include "../h_files/output_funcs.h"

detail **deleteElemByIndex(detail **data, int *datasize){
    int index, count;
    printf("start idx - ");
    scanf("%d", &index);
    printf("count - ? ");
    scanf("%d", &count);

    int endIdx = index + count;
    
    detail **newData = (detail **)malloc((*datasize - count) * sizeof(detail *));

    int newi;

    for (newi=0; newi<index; newi++){
        newData[newi] = data[newi];
    }
    for (int i=index; i<endIdx; i++){
        freeElem(data[i]);
    }
    for (int i=endIdx; i < *datasize; i++, newi++){
        newData[newi] = data[i];
    }
    *datasize -= count;
    return newData;
}