#include <readline/readline.h>
#include <stdlib.h>
#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/my_lib.h"

detail** inputDataConsole(int *datasize){
    int count = 0;
    printf("Enter the count of new elems - ");
    scanf("%d", &count);
    *datasize = count;
    detail **localdata = NULL;
    localdata = (detail **)malloc(count * sizeof(detail *));

    for(int k=0; k<count; k++){
        printf("==Data of %d element:\n", k+1);
        detail *newElem = NULL;
        newElem = newElement();
        localdata[k] = newElem;
    }
    
    return localdata;
}