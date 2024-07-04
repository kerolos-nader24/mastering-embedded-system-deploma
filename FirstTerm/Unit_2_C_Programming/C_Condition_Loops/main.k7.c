/*
 ============================================================================
 Name        : k7.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int main()
{
char o ;
float n1,n2 ;
 printf("enter you operation :  ");
 fflush(stdin) ;
 fflush(stdout) ;
scanf("%c",&o);

printf("enter the numbers : " );

scanf(" %f %f" ,&n1,&n2);

switch(o){
case '+':
	printf("%f+%f=%f",n1,n2,n1+n2);
	break;
case '-':
	printf("%f-%f=%f",n1,n2,n1-n2);
	break;

case '*':
	printf("%f*%f=%f",n1,n2,n1*n2);
	break;

case '/':
	printf("%f/%f=%f",n1,n2,n1/n2);

	break;

default :
	printf("error :");

	break ;
























































































}

return 0;
}
