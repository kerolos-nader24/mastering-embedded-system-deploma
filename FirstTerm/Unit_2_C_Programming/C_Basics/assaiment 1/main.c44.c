/*
 ============================================================================
 Name        : c44.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int main()
{
	 char c;
	    printf("Enter a character: ");
	    fflush(stdin) ;
	    fflush(stdout) ;
	    scanf("%c",&c);        /* Takes a character from user */
	    printf("%c=%d",c,c);

return 0;
}
