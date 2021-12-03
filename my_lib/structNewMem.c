#include <stdlib.h>
#include <string.h>

#include "../h_files/struct.h"

detail* structNewMem(detail *oldData, int newSize, int oldSize){
    detail *newData = NULL;
    newData = (detail *)malloc(newSize * sizeof(detail));
    if (newSize == 1) newData[0].name = NULL;
    for (int idx=0; idx<oldSize; idx++){
        strcpy(newData[idx].id, oldData[idx].id);
        newData[idx].name = (char *)malloc(strlen(oldData[idx].name) * sizeof(char));
        strcpy(newData[idx].name, oldData[idx].name);
        free(oldData[idx].name);
        newData[idx].counter = oldData[idx].counter;
    }
    free(oldData);
    return newData;
}