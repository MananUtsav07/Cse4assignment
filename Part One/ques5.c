/*
    Write a C program to print all odd numbers between 1 to 100

   

*/

#include <stdio.h>

int main (void) {

    for (int i=1; i<=100; i+=2)
        printf("%d ", i);

    return 0;
}