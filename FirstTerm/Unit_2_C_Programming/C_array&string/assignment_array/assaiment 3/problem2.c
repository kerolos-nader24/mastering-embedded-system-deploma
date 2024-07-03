/*
 ============================================================================
 Name        : nnnnnn.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int main()
{
int a[5] , n , elem ,i ;
printf("enter the num of elem : " );
fflush(stdin) ;
fflush(stdout);
scanf("%d" , &n);
for(i=0 ;i<n; i++)
{
	printf("enter the  elem : " );
	fflush(stdin) ;
	fflush(stdout);
	 scanf("%d",&a[i]);
}
printf("enter the  elem to be research : " );
fflush(stdin) ;
		fflush(stdout);
scanf("%d",&elem);


for(i=0 ; i<n ;i++)
{
	if (elem==a[i]){
		printf(" the position of element  %d ",i+1 );
		fflush(stdin) ;
				fflush(stdout);
break;
	}




}
if(n==i){
	printf(" not found");
}

return 0;
}
