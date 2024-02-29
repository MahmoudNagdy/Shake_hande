#include "Shakes.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>

static int people_num;

void print_Intro(void){

    sleep(5);

    printf("\n\n");
    printf("        \033[1;37mWelcome To My Project\n\n");
    sleep(5);
    system("cls");

    printf("\n\n");
    printf("        \033[1;37mIt's Shakes Calculator\n\n");
    sleep(5);
    system("cls");

    printf("\n\n");
    printf("        \033[1;37mI'm Mahmoud Nagdy\n\n");
    sleep(5);
    system("cls");
}

void enter_PeopleNum(void){

    printf("\033[1;37mEnter People Num: ");
    scanf("%d", &people_num);

}

void print_ShakesNum(void){

    int Shakes_Num;

    Shakes_Num = (people_num * (people_num - 1)) / 2;

    system("cls");

    printf("\033[1;37mThe total number of handshake = \033[1;32m%d\033[1;37m\n", Shakes_Num);

    printf("\n\n");

}
