/*
 ============================================================================
 Name        : ADD.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct complex{
	int real;
	int image;

} num1 ,num2;

struct complex addcomplex(struct complex x,struct complex y){
	 struct complex c;
	 c.real=x.real+y.real;
	 c.image =x.image+y.image;
	 return c;
}


int main()
{
	struct complex  sum;
	 fflush(stdin) ;
	         		fflush(stdout);
	printf("enter the 1th complex number :\n");
	 fflush(stdin) ;
	         		fflush(stdout);
	scanf("%d %d",&num1.real,&num1.image);
	 fflush(stdin) ;
	         		fflush(stdout);
	printf("enter the 2th complex number :\n");
	 fflush(stdin) ;
	         		fflush(stdout);
		scanf("%d %d",&num2.real,&num2.image);

		sum=addcomplex(num1,num2);
		 fflush(stdin) ;
		         		fflush(stdout);
		printf("sum=%d+%di",sum.real,sum.image);
		return 0;
}
