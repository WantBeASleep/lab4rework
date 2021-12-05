#include <stdlib.h>
#include <string.h>

#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/my_lib.h"

detail* includeElemByIndex(detail *oldData, detail *Elem, int *Datasize, int index){
    detail *newData = NULL;
    newData = structNewMem(oldData, *Datasize + 1, *Datasize);
    (*Datasize)++;

    for(int k = *Datasize - 1; k > index; k--){
        cpyElemStruct(&(newData[k]), &(newData[k-1]));
    }

    strcpy(newData[index].id, Elem->id);
    if (newData[index].name) free(newData[index].name);
    newData[index].name = (char *)malloc(strlen(Elem->name) * sizeof(char));
    strcpy(newData[index].name, Elem->name);
    newData[index].counter = Elem->counter;
    return newData;
}