/*
 ============================================================================
 Name        : Add.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct distance {
	int inche ;
	int feet ;
} d1 , d2, sum;

int main()
{
	fflush(stdin) ;
		         		fflush(stdout);
 printf("enter the information of distance 1th \n");
 fflush(stdin) ;
 	         		fflush(stdout);
 printf("enter the feet1 :\n");
 fflush(stdin) ;
 	         		fflush(stdout);
 scanf("%d",&d1.feet);
 fflush(stdin) ;
 	         		fflush(stdout);
 printf("enter the inche :\n");
 fflush(stdin) ;
 	         		fflush(stdout);
  scanf("%d",&d1.inche);
  fflush(stdin) ;
  	         		fflush(stdout);
  printf("enter the feet2 :\n");
  fflush(stdin) ;
  	         		fflush(stdout);
   scanf("%d",&d2.feet);
   fflush(stdin) ;
   	         		fflush(stdout);
   printf("enter the inche 2 :\n");
   fflush(stdin) ;
   	         		fflush(stdout);
     scanf("%d",&d2.inche);
     fflush(stdin) ;
     	         		fflush(stdout);
     sum.feet= d1.feet+d2.feet;
     sum.inche= d1.inche+d2.inche;

     if(sum.inche>12){
    	 sum.inche= sum.inche-12 ;
    			 ++sum.feet;
     }
     fflush(stdin) ;
     	         		fflush(stdout);
     printf("distence is== %d/--%d/ ",sum.inche,sum.feet);
    return 0;
}

