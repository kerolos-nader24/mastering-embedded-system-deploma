/*
 ============================================================================
 Name        : string11.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int main()
{
char s[100] ,ch ;
int i,count;
printf("enter a string :   ");
fflush(stdin) ;
fflush(stdout) ;
gets(s);
printf("enter a character :   ");
fflush(stdin) ;
fflush(stdout) ;
scanf("%c",&ch);
 for(i=0;s[i]!='\0';i++){
	 if(ch==s[i]){
		 count++;
	 }

 }
 printf("the frequncy %c =%d " ,ch ,count);
return 0;
}
