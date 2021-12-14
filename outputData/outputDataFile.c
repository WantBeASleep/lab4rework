#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

#include "../h_files/struct.h"

void outputDataFile(detail **data, int dataSize){

    FILE *file;
    char *fileName = NULL;
    
    fileName = readline("Enter the file name ");
    
    file = fopen(fileName, "w");

    for (int idx=0; idx<dataSize; idx++){
        fprintf(file, "%s\n", data[idx]->id);
        fprintf(file, "%s\n", data[idx]->name);
        fprintf(file, "%d\n", data[idx]->counter);
    }

    free(fileName);
    fclose(file);
    return;
}
