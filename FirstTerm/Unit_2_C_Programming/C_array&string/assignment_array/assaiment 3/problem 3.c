/*
 ============================================================================
 Name        : problem.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "stdio.h"
int main()
{
int a[3][3] , t[3][3];
int i ,j ;
for(i=0 ; i <3 ; i++)
{
	  for(j=0 ; j<3 ; j++)
	  {
		  printf("enter 1nd arr %d %d: = ",i+1 ,j+1 );
		  fflush(stdin) ;
		  fflush(stdout) ;
		  scanf("%d" ,&a[i][j]);
	  }
}
for(i=0 ; i <3 ; i++)
{
	  for(j=0 ; j<3 ; j++)
	  {
		  printf(" %d  ", a[i][j] );
		  fflush(stdin) ;
		  fflush(stdout) ;
		 if(j==2){
			 printf("\n\n");
		 }
	  }
}
for(i=0 ; i <3 ; i++)
{
	  for(j=0 ; j<3 ; j++)
	  {
		 t[j][i]=a[i][j];
	  }
}
for(i=0 ; i <3 ; i++)
{
	  for(j=0 ; j<3 ; j++)
	  {
		  printf(" %d  ", t[i][j] );
				  fflush(stdin) ;
				  fflush(stdout) ;
				 if(j==2){
					 printf("\n\n");
				 }
	  }
}
return 0;
}
