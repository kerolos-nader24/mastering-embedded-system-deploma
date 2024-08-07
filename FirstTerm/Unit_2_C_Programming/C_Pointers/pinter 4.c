/*
 ============================================================================
 Name        : pinter.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int main()
{
int arr[15];
int n ,i;
int *ptr;

fflush(stdin) ;
             fflush(stdout);
printf("enter the num of element\n");
fflush(stdin) ;
             fflush(stdout);
scanf("%d",&n);
fflush(stdin) ;
             fflush(stdout);
             ptr=&arr[0];
printf("num of element: %d",n);

for(i=0;i<n;i++){
	fflush(stdin) ;
	             fflush(stdout);
	scanf("%d",ptr);
	ptr++;

}


ptr=&arr[n-1];

for(i=n;i>0;i--){
	fflush(stdin) ;
	             fflush(stdout);
	printf ("tne reverse elelmnt %d\n",*ptr);
	ptr--;

}




    return 0;
}
