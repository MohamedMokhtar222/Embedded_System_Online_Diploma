/*
 * main.c
 *
 *  Created on: Aug 30, 2023
 *      Author: mok
 */

#include<stdio.h>

struct employee
{
	char name[50];
	int id;
};
int main(void)
{

	struct employee emp1={"John",1001},emp2={"Alex",1002},emp3={"Taylor",1003};
	struct employee *a[]={&emp1,&emp2,&emp3};
	struct employee *(*p)[]=&a;
	printf("Exmployee Name : %s\nEmployee ID : %d",(*(*p+1))->name,(*(*p+1))->id);
}
