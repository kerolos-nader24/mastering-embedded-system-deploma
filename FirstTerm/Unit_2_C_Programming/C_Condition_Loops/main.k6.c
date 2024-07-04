/*
 ============================================================================
 Name        : k6.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "stdio.h"
int main()
{
int i , n , sum=0;

printf("enter the num of num :  ");
fflush(stdin) ;
fflush(stdout) ;

scanf("%d",&n);

for(i=1 ;i<=n ;i++){

	sum+=i;

}
 printf(" %d sum =",sum);
return 0;
}
