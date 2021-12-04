#include <stdlib.h>

#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/my_lib.h"

void exchangeStructElems(detail *first, detail *second){
    detail *tmp = NULL;
    tmp = (detail *)malloc(sizeof(detail));
    cpyElemStruct(tmp, second);
    cpyElemStruct(second, first);
    cpyElemStruct(first, tmp);
    freeNamesFields(tmp, 1);
    free(tmp);
}