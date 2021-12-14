#include <stdio.h>
#include <stdlib.h>

#include "h_files/struct.h"
#include "h_files/menus.h"
#include "h_files/my_lib.h"

int main(){
    int sortType = 0; // 0 - не сорт, 1 - сорт по id, 2 - сорт по name, 3 - сорт по counter
    detail **data = NULL;
    int dataSize = 0;

    for(; ;){
        int choise = mainMenu();
        switch (choise){
            case 1:{
                data = inputMenu(data, &dataSize, &sortType);
                break;
            }
            case 2:{
                outputMenu(data, dataSize);
                break;
            }
            case 3:{
                data = processedMenu(data, &dataSize, &sortType);
                break;
            }
            case 4:{
                sortMenu(data, dataSize, &sortType);
                break;
            }
            case 5:{
                timeMenu();
                break;
            }
            case 6:{
                freeStructData(data, &dataSize);
                exit(0);
                break;
            }
        }
    }

    return 0;
}
