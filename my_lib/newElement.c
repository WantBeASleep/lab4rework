#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

#include "../h_files/struct.h"

detail* newElement(){
    detail *newElem;
    newElem = (detail *)malloc(sizeof(detail));
    printf("Enter the id - ");
    scanf("%s", newElem->id);
    newElem->name = readline("Enter the name - ");
    printf("Enter the count - ");
    scanf("%d", &(newElem->counter));
    return newElem;
}