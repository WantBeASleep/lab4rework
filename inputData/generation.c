#include <stdlib.h>
#include <string.h>

#include "../h_files/struct.h"

detail **generation(int datasize){
    
    detail **localdata = (detail **)malloc(datasize * sizeof(detail *));

    for (int i=0; i<datasize; i++){
        int nameLenght, counterField;
        char *idField, *nameField;
        nameLenght = 5 + rand() % 25;

        idField = (char *)malloc(8 * sizeof(char));
        nameField = (char *)malloc(nameLenght * sizeof(char));

        for (int j=0; j<7; j++){
            idField[j] = 97 + (rand() % 26);
        }
        idField[7] = '\0';

        for (int j=0; j<nameLenght-1; j++){
            nameField[j] = 97 + (rand() % 26);
        }
        nameField[nameLenght-1] = '\0';

        counterField = rand() % 100;

        detail *elemData = NULL;
        elemData = (detail *)malloc(sizeof(detail));
        strcpy(elemData->id, idField);
        elemData->name = nameField;
        elemData->counter = counterField;
        localdata[i] = elemData;
    }
    return localdata;
}