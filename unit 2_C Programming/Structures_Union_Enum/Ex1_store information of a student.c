/*
 * main.c
 *
 *  Created on: Aug 20, 2023
 *      Author: mok
 */

#include<stdio.h>

struct Student
{
	char name[50];
	int roll;
	float marks;
};

int main(void)
{
	struct Student X;
	printf("Enter information of student: \n");
	printf("\nEnter name: ");
	fflush(stdin); fflush(stdout);
	gets(X.name);
	printf("Enter roll number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&X.roll);
	printf("Enter marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&X.marks);
	printf("\nDisplaying information: \n");
	printf("name: %s\nroll: %d\nmarks: %.2f",X.name,X.roll,X.marks);

}
