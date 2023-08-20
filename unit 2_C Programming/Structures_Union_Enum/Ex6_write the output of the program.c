/*
 * main.c
 *
 *  Created on: Aug 21, 2023
 *      Author: mok
 */

#include<stdio.h>
union job
{
	char name[32];
	float salary;
	int worker_no;
}u;
struct job1
{
	char name[32];
	float salary;
	int worker_no;
}s;
int main()
{
printf("size of union =%d",sizeof(u));
printf("\nsize of structure =%d",sizeof(s));
}
