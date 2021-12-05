#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/my_lib.h"
#include "../h_files/output_funcs.h"

detail* deleteElemByIndex(detail *oldData, int *Datasize, int index){
    detail *newData = NULL;
    newData = (detail *)malloc(((*Datasize) - 1) * sizeof(detail));
    for (int i=0; i<index; i++){
        cpyElemStruct(&(newData[i]), &(oldData[i]));
    }
    for (int i=index; i<(*Datasize - 1); i++){
        cpyElemStruct(&(newData[i]), &oldData[i+1]);
    }
    freeNamesFields(oldData, *Datasize);
    free(oldData);
    (*Datasize) -= 1;
    return newData;
}