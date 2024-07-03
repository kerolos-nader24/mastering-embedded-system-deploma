/*
 ============================================================================
 Name        : revese.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>

void revese() ;

int main() {
	fflush(stdin) ;
	            		fflush(stdout);
   printf("enter the char:");

   revese();


    return 0;
}
void revese() {
	char c ;
	fflush(stdin) ;
	         		fflush(stdout);
	 scanf("%c",&c);

	 if(c!='\n'){

		 revese();
		 fflush(stdin) ;
		          		fflush(stdout);
		 printf("%c",c);


	 }









}
