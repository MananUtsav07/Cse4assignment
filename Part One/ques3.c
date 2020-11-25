/*
    Write a C program to print all alphabets from a to z.

   
*/

#include <stdio.h>

int main (void) {

    for(int i=0; i<26; i++)
        printf("%c ", 'a'+i);

    return 0;

}