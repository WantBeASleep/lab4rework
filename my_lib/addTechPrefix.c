#include <string.h>
#include <stdlib.h>

char* addTechPrefix(char *origString){

    int idx = 0;
    while(origString[idx] != '.') idx++;

    char *techString = NULL;
    int endtechIndex = strlen(origString) + 4;
    techString = (char *)malloc(endtechIndex * sizeof(char));
    strcpy(techString, origString);
    techString[endtechIndex] = '\0';

    for (int k = endtechIndex - 1; k >= idx+4; k--){
        techString[k] = origString[k-4];
    }

    char tech[4] = "TECH";
    for (int k=idx; k<(idx+4); k++){
        techString[k] = tech[k - idx];
    }
    return techString;
}
