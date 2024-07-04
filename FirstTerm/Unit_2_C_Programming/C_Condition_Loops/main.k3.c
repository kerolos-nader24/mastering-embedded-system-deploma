/*
 ============================================================================
 Name        : k3.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

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
int num ;
printf("enter the num :  ");
fflush(stdin) ;
fflush(stdout) ;

scanf("%d",&num) ;

if(num<=0){

	printf("%d is negative", num);

}
else{
	printf("%d is positive", num);
}


return 0;
}

