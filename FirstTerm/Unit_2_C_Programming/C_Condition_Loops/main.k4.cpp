//============================================================================
// Name        : k4.cpp
// Author      : kerolos
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 ============================================================================
 Name        : k3.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int main()
{
int a,b,c;

printf("enter the biggest num");

fflush(stdin) ;
fflush(stdout) ;

scanf("%d %d %d",&a,&b,&c);

if(a>b && a>c){

printf("%d is the biggest num",a);

}
else if(b>a && b>c){

printf("%d is the biggest num",b);

}
if(c>b && b>a){

printf("%d is the biggest num",c);

}

return 0;
}
