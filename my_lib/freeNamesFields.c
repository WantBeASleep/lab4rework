#include <stdlib.h>

#include "../h_files/struct.h"

void freeNamesFields(detail *data, int datasize){
    for (int idx = 0; idx<datasize; idx++){
        free(data[idx].name);
    }
    return;
}