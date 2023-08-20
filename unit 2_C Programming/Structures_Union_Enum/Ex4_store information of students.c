/*
 * main.c
 *
 *  Created on: Aug 21, 2023
 *      Author: mok
 */

#include<stdio.h>
#include<string.h>

struct Student
{
	char name[10];
	int roll;
	float marks;
};

int main(void)
{
	struct Student X[10];
	int i;
	printf("Enter information of student: \r\n");
	for(i=0;i<10;i++)
	{
		X[i].roll=i+1;
		printf("for roll number %d: ",i+1);
		printf("\nEnter name: ");
		fflush(stdin); fflush(stdout);
		gets(X[i].name);

		printf("Enter marks: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&X[i].marks);
		printf("\n");
	}
	printf("Displaying information: \r\n");
	for(i=0;i<10;i++)
	{
		printf("information for roll number %d\nname: %s\nmarks: %.2f",X[i].roll+1,X[i].name,X[i].marks);
		printf("\r\n");
	}
}
