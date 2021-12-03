#include <stdlib.h>
#include <string.h>

#include "../h_files/struct.h"

void cpyElemStruct(detail *cpy, detail *source){
    strcpy(cpy->id, source->id);
    free(cpy->name);
    cpy->name = (char *)malloc(strlen(source->name) * sizeof(char));
    strcpy(cpy->name, source->name);
    cpy->counter = source->counter;
    return;
}