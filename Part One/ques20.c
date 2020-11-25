/*
    Write a C program to print all ASCII character with their values.

    

*/

#include <stdio.h>

#define size 255 //Considering ASCII Extented

int main (void) {

    char c = NULL;

    for(int i=0; i<size; i++)
        printf("[ %c : %d ]\n", c+i, c+i);

    return 0;

}