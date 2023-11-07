#include <stdio.h>
#include "safeinput.h"

typedef struct{
    char cardId[20];
}CARD;

typedef struct{
    CARD *lista;
    int count;
}CARDLIST;


void adminMenu(CARDLIST *cardList) {

    char namn[20];
    int i = 12;
    printf("MENY\n");
    //printf("Ange namn:");
    //scanf("%s",namn);
    GetInput("Ange namn:", namn, 20);
    int sel;
    GetInputInt("Ange sel", &sel);


    while(1){
        printf("Admin menu\n");
        printf("1. Remote open door\n");

        printf("4. Exit\n");
        int sel;
        GetInputInt("Ange val:", &sel);
        if(sel == 4){
            break;
        }
    }

}

int main(){
    CARDLIST cardList;
    adminMenu(&cardList);
    return 0;
}