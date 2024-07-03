/*
 ============================================================================
 Name        : Array21.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int main()
{
int n;
int i ;
float a[6];
float sum =0;
printf (" Enter the number of element :  ");
fflush(stdin) ;
fflush(stdout) ;
scanf(" %d",& n);


for (i=0 ; i<n ;i++ )
{
	printf("Enter the element  %d /n",i+1);
	fflush(stdin) ;
	fflush(stdout) ;
	scanf("%f" ,&a[i]);
}
for (i=0 ; i<n ;i++ )
{
	sum=sum+a[i];
}
printf("the averge of the elemnt  :%f " ,sum/n );
return 0;
}
