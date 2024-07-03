/*
 ============================================================================
 Name        : c5.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int main()
{
	float a,b,temp;
	printf("enter a:");
	fflush(stdin) ;
	fflush(stdout) ;
	scanf("%f" , &a);
	printf("enter b :");
	fflush(stdin) ;
		fflush(stdout) ;
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("value of a = %f \n", a);
	printf("value of b = %f ", b);
return 0;
}
