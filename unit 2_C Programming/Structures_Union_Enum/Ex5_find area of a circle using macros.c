/*
 * main.c
 *
 *  Created on: Aug 21, 2023
 *      Author: mok
 */

#include<stdio.h>
#define PI 3.1415
#define area(r)(PI*(r)*(r))
int main(void)
{
	int radius;
	float area;
	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&radius);
	area=area(radius);
	printf("Area=%.2f",area);
}
