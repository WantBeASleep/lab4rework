#include <stdio.h>

#include "../h_files/struct.h"

void outputDataConsole(detail **data, int dataSize){
    printf("==\nDataSize - %d\n", dataSize);
    for (int idx=0; idx<dataSize; idx++){
        printf("Element num - %d\n", idx+1);
        printf("- id: %s\n", data[idx]->id);
        printf("- name: %s\n", data[idx]->name);
        printf("- counter: %d", data[idx]->counter);
        printf("\n==\n");
    }
    return;
}
