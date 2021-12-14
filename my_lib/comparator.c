#include <string.h>
#include <stdlib.h>

#include "../h_files/struct.h"

// return 1 - первый аргумент больше второго
// return 0 - первый аругмент меньше второго

int comparator(detail *firstElem, detail *secondElem, int sortType){    
    switch(sortType){
        case 1:{
            int res = strcmp(firstElem->id, secondElem->id);
            if (res < 0) res = 0;
            return res;
            break;
        }
        case 2:{
            int res = strcmp(firstElem->name, secondElem->name);
            if (res < 0) res = 0;
            return res;
            break;
        }
        case 3:{
            int res = (firstElem->counter > secondElem->counter)? 1:0;
            return res;
            break;
        }
    }
}