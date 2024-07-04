/*
 ============================================================================
 Name        : k1.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int main()
{
	int num ;
	printf("enter the num :  ");
	fflush(stdin) ;
	fflush(stdout) ;
	scanf("%d",&num);
	if ((num%2)==0){

		printf("%d is even",num);
	}
	else{
		printf("%d is odd",num);
	}
return 0;
}
