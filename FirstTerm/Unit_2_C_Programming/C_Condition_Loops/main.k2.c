/*
 ============================================================================
 Name        : k2.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int main()
{
char c ;
printf("enter the chat");
fflush(stdin) ;
fflush(stdout) ;
scanf("%c",&c);
if(c=='a'||c=='A'||c=='e'||c=='E'||c=='o'||c=='O'||c=='u'||c=='U'||c=='I'||c=='i'){
	printf("%c is vowel",c);
}
else{
	printf("%c is consonant",c);
}
return 0;
}
