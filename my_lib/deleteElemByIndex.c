#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/my_lib.h"
#include "../h_files/output_funcs.h"

detail* deleteElemByIndex(detail *oldData, int *Datasize, int index){
    detail *newData = NULL;
    newData = (detail *)malloc(((*Datasize) - 1) * sizeof(detail));
    
    outputDataConsole(oldData, *Datasize);

    for (int i=0; i<index; i++){
        cpyElemStruct(&(newData[i]), &(oldData[i]));
    }

    outputDataConsole(oldData, *Datasize);

    for (int i=index; i<(*Datasize - 1); i++){
        cpyElemStruct(&(newData[i]), &oldData[i+1]);
    }

    freeNamesFields(oldData, *Datasize);
    free(oldData);
    (*Datasize) -= 1;
    return newData;
}