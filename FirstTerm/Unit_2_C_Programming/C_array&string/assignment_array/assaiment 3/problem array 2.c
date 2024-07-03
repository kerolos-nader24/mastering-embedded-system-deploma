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
float a[2][2], b[2][2] , c[2][2];
 int i , j ;
  for(i=0 ; i <2 ; i++)
  {
	  for(j=0 ; j<2 ; j++)
	  {
		  printf("enter 1nd arr %d %d: = ",i+1 ,j+1 );
		  fflush(stdin) ;
		  fflush(stdout) ;
		  scanf("%f" ,&a[i][j]);
	  }
  }
  for(i=0 ; i <2 ; i++)
   {
 	  for(j=0 ; j<2 ; j++)
 	  {
 		  printf("enter 2nd arr %d %d: = ",i+1 ,j+1 );
 		  fflush(stdin) ;
 		  fflush(stdout) ;
 		  scanf("%f" ,&b[i][j]);
 	  }
   }
  for(i=0 ; i <2 ; i++)
   {
 	  for(j=0 ; j<2 ; j++)
 	  {
 		 c[i][j]=a[i][j]+b[i][j];
 	  }
   }
  for(i=0 ; i <2 ; i++)
    {
  	  for(j=0 ; j<2 ; j++)
  	  {
  		  printf("/n the sum of matrix : =  %f", c[i][j] );
  		  fflush(stdin) ;
  		  fflush(stdout) ;
if (j==1){
	printf("/n");
}
  	  }
    }
return 0;
}
