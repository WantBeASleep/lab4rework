#include <stdlib.h>
#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/my_lib.h"

detail* newElementByIndex(detail *Data, int *Datasize){
    int index;
    printf("Index of new element - ");
    scanf("%d", &index);
    detail *newElem = NULL;
    newElem = newElement();
    Data = includeElemByIndex(Data, newElem, Datasize, index);
    freeNamesFields(newElem, 1);
    free(newElem);
    return Data;
}