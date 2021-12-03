#include <readline/readline.h>
#include <stdlib.h>

#include "../h_files/struct.h"
#include "../h_files/my_lib.h"

detail* inputDataConsole(int *DataSize){
    int count = 0;
    printf("Enter the count of new elems - ");
    scanf("%d", &count);
    *DataSize = count;

    detail *localData = NULL;

    for(int k=0; k<count; k++){
        printf("Data of %d element\n", k+1);
        int localDataSize = k;
        detail *newElem = NULL;
        newElem = newElement();
        localData = includeElemByIndex(localData, newElem, &localDataSize, k);
        freeNamesFields(newElem, 1);
        free(newElem);
    }

    return localData;
}
