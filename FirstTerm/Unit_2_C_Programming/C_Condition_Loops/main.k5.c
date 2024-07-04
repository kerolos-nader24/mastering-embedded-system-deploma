/*
 ============================================================================
 Name        : k5.c
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

printf(" enter the char :   ");
fflush(stdin) ;
fflush(stdout) ;

scanf("%c",&c);

if((c>'a'&& c<'z') || (c>'A'&& c<'Z')) {

	printf("%c is alghabet" , c);
}
else{

printf("is not alphabet");
}

return 0;
}
