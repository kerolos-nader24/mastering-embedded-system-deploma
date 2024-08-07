/*
 ============================================================================
 Name        : reverse.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[12];
    char reverse[12];
    char *ptr1 = str1;
    char *ptr2 = reverse;
    int x, i;

    printf("Enter the word please:\n");
    fflush(stdin);
    fflush(stdout);

    scanf("%s", str1);

    // Move ptr1 to the end of the string
    for (x = 0; x < 12 && *ptr1 != '\0'; x++) {
        ptr1++;
    }
    ptr1--; // Move one step back to the last character of the string

    // Reverse the string using a for loop
    for (i = 0; ptr1 >= str1; i++) {
        *ptr2 = *ptr1;
        ptr1--;
        ptr2++;
    }
    *ptr2 = '\0'; // Null-terminate the reversed string

    printf("Reversed string: %s\n", reverse);

    return 0;
}
