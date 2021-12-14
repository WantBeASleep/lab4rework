#include <stdlib.h>

#include "../h_files/struct.h"

void freeElem(detail *data){
    free(data->name);
    free(data);
    return;
}