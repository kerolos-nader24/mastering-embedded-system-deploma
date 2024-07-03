/*
 ============================================================================
 Name        : problem44.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int main()
{
int n ,elem ,locatin ,i;
int arr[30];
 printf("enter the number of element : ");
 fflush(stdin) ;
 fflush(stdout) ;
  scanf("%d" ,&n);

for (i=0 ; i<n ; i++){

scanf("%d" ,&arr[i]);
}
printf("enter the element :");
fflush(stdin) ;
 fflush(stdout) ;
scanf("%d",&elem);
printf ("enter the locatin :");
fflush(stdin) ;
 fflush(stdout) ;
scanf ("%d", &locatin);
for(i=0 ;i<n;i++)
{
	arr[locatin]=elem;
}

for(i=0 ;i<n;i++)
{
	printf("%d",arr[i]);
	fflush(stdin) ;
	 fflush(stdout) ;
}

return 0;
}
