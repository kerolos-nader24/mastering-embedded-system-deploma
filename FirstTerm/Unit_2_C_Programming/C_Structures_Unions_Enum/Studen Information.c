/*
 ============================================================================
 Name        : Studen.c
 Author      : kerolos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

struct student {
	char name[50];

	int marks;
} student;
int main() {
	fflush(stdin) ;
	         		fflush(stdout);
printf("enter information of student \n");
fflush(stdin) ;
         		fflush(stdout);
printf("enter the name of the student  : \n  ");
fflush(stdin) ;
         		fflush(stdout);
scanf("%s",&student.name);
fflush(stdin) ;

         		fflush(stdout);
printf("enter the marks of the student  : \n  ");
fflush(stdin) ;
         		fflush(stdout);
scanf("%d ",&student.marks);

         		 fflush(stdin);
         		 fflush(stdout);
         		    printf("Name: %s\n",student.name);
         		    fflush(stdin);
         		    fflush(stdout);
         		    printf("Marks: %d\n",student.marks);
    return 0;
}
