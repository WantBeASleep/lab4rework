#include <stdlib.h>
#include <stdio.h>

#include "../h_files/struct.h"

void freeStructData(detail **data, int *datasize){
    for (int idx = 0; idx < *datasize; idx++){
        if (data[idx]->name) free(data[idx]->name);
        free (data[idx]);
    }
    *datasize = 0;
    return;
}