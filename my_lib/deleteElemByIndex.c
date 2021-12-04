#include <stdlib.h>
#include <string.h>

#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/my_lib.h"

detail* deleteElemByIndex(detail *oldData, int *Datasize, int index){
    detail *newData = NULL;
    (*Datasize)--;
    newData = (detail *)malloc(sizeof(detail) * *Datasize);

    for (int i=0; i<index; i++){
        cpyElemStruct(&(newData[i]), &(oldData[i]));
    }
    for (int i=index; i<Datasize; i++){
        cpyElemStruct(&(newData[i]), &(oldData[i+1]));
    }

    freeNamesFields(oldData, *Datasize + 1);
    free(oldData);
    return newData;
}