#include <stdlib.h>
#include "../h_files/struct.h"

detail** dataMemAdd(detail **data, int *datasize, int addCount){
    detail **newData = NULL;
    newData = (detail **)malloc((*datasize + addCount) * sizeof(detail *));
    for (int k=0; k < *datasize; k++){
        newData[k] = data[k];
    }
    *datasize += addCount;
    free(data);
    return newData;
}