#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>

#include "../h_files/struct.h"
#include "../h_files/my_lib.h"

detail** inputDataFile(int *datasize){
    detail **localdata = NULL;

    char *fileName = NULL;
    fileName = readline("Enter the file name - ");

    FILE *file;
    file = fopen(fileName, "r");

    char str[100]; //запись name из файла
    char id[8];
    *datasize = 0;
    int i=0;

    while (fscanf(file, "%s", id) != EOF) {
        localdata = dataMemAdd(localdata, datasize, 1);
        detail *newElem = NULL;
        newElem = (detail *)malloc(sizeof(detail));

        strcpy(newElem->id, id);
        fscanf(file, "%s", str);
        newElem->name = (char *)malloc(strlen(str) * sizeof(char));
        strcpy(newElem->name, str);
        fscanf(file, "%d", &(newElem->counter));
        localdata[i] = newElem;
        i++;
    }

    fclose(file);
    free(fileName);
    return localdata;
}
