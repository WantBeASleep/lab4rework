#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>

#include "../h_files/struct.h"
#include "../h_files/my_lib.h"

detail* inputDataFile(int *DataSize){
    char *fileName = NULL;
    fileName = readline("Enter the file name - ");

    FILE *file;
    file = fopen(fileName, "r");

    detail *localData = NULL;
    char str[100]; //запись name из файла
    char id[8];
    *DataSize = 0;

    while (fscanf(file, "%s", id) != EOF) {
        (*DataSize)++;
        int idx = *DataSize - 1;  
        localData = structNewMem(localData, *DataSize, *DataSize - 1);
        strcpy(localData[idx].id, id);
        fscanf(file, "%s", str);
        localData[idx].name = (char *)malloc(strlen(str) * sizeof(char));
        strcpy(localData[idx].name, str);
        fscanf(file, "%d", &(localData[idx].counter));
    }

    fclose(file);
    free(fileName);
    return localData;
}
