#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

#include "../h_files/struct.h"

void outputDataFile(detail *Data, int DataSize){

    FILE *file;
    char *fileName = NULL;
    
    fileName = readline("Enter the file name ");
    
    file = fopen(fileName, "a");

    for (int idx=0; idx<DataSize; idx++){
        fprintf(file, "%s\n", Data[idx].id);
        fprintf(file, "%s\n", Data[idx].name);
        fprintf(file, "%d\n", Data[idx].counter);
    }

    free(fileName);
    fclose(file);
    return;
}
