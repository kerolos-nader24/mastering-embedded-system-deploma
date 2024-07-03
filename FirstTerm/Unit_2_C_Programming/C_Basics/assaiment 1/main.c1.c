/*
 ============================================================================
 Name        : c1.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int main()
{
    int num;
    printf("Enter a integer: ");
    fflush(stdin) ;
    fflush(stdout) ;
    scanf("%d",&num);  /* Storing a integer entered by user in variable num */
    printf("You entered: %d",num);
    return 0;
}
