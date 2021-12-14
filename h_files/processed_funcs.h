#ifndef PROCESSEDFUNCS_H
#define PROCESSEDFUNCS_H

#include "struct.h"

detail **addElemByIndex(detail **data, int *datasize, int *sortType);
detail **addElemSaveSort(detail **data, int *datasize, int *sortType);
detail **deleteElemByIndex(detail **data, int *datasize);

#endif