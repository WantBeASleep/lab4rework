#include <stdlib.h>

#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/my_lib.h"

void exchangeStructElems(detail **data, int idxF, int idxS){
    detail *cpy = data[idxF];
    data[idxF] = data[idxS];
    data[idxS] = cpy;
    return;
}