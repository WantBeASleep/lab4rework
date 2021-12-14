#ifndef MYLIB_H
#define MYLIB_H

#include "struct.h"

void freeStructData(detail **data, int *datasize);
void exchangeStructElems(detail **data, int idxF, int idxS);
void freeElem(detail *data);

detail** dataMemAdd(detail **data, int *datasize, int addCount);
detail* newElement();

int comparator(detail *firstElem, detail *secondElem, int sortType);

#endif