/*
 ============================================================================
 Name        : information.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

struct student {
	char name [20];
	int marks;
}student[4];


int main()
{
	fflush(stdin) ;
	         		fflush(stdout);
 printf("Enter the information of student \n");

 for(int i=0; i<4;i++){
	 fflush(stdin) ;
	          		fflush(stdout);
	 printf("Enter the name of student %d\n",i+1);
	 fflush(stdin) ;
	          		fflush(stdout);
	 scanf("%s",&student[i].name);
	 fflush(stdin) ;
	          		fflush(stdout);
	 printf("Enter the mark of student %d \n",i+1);
	 fflush(stdin) ;
	          		fflush(stdout);
	 	 scanf("%d",&student[i].marks);

 }
 for(int i=0 ;i<4 ;i++){
	 fflush(stdin) ;
	          		fflush(stdout);
	 printf("Name:  %s\n ",student[i].name);
	 fflush(stdin) ;
	          		fflush(stdout);
	 printf("mark: %d \n",student[i].marks);
 }
    return 0;
}
