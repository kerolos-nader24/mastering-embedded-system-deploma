/*
 ============================================================================
 Name        : p.c
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
char str1 [27];
char *ptr ;
int x;

ptr=str1;
for(x=0;x<26;x++){
	*ptr=x+'A';
	ptr++;


}
ptr=str1;
for(x=0;x<26;x++){
	printf("%c",*ptr);

	ptr++;

}
printf("\n\n");
    return 0;
}


