/*
 ============================================================================
 Name        : pointer.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>



int main()
{
int *ba;
int m;
m=29;
printf("Address of m :%p\n",&m);
printf("value of m :%d\n\n",m);
ba=&m;
printf("Address of m :%p\n",ba);
printf("content of m :%d\n\n",*ba);
m=34;
printf("Address of m :%p\n",ba);
printf("content of m :%d\n\n",*ba);

*ba=7;
printf("Address of m :%p\n",&m);
printf("value of m :%d\n\n",m);


    return 0;
}
