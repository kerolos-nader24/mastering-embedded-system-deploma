/*
 ============================================================================
 Name        : string.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int main()
{
char s[100]  ;
int i ;
printf( "enter the string \n");
fflush(stdin) ;
fflush(stdout) ;
scanf("%s" , s);
 for(i=0 ;s[i]!='\0';i++)
 {
	printf("the lentgth : %d" ,i);
	fflush(stdin) ;
	fflush(stdout) ;
 }

return 0;
}
