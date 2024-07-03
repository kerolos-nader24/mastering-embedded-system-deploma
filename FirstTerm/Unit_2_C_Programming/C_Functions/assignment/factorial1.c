/*
 ============================================================================
 Name        : factorial1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "stdio.h"
int fact (int x){

	int f=1;
	for( ;x>0 ;x--)
		f*=x;

	return f;
}
int main()
{
 int x;
 fflush(stdin) ;
         		fflush(stdout);
 printf("enter the number \n:");
 fflush(stdin) ;
         		fflush(stdout);
 scanf("%d",&x);

 printf("factorial(%d)=%d ",x,fact(x));


    return 0;
}
