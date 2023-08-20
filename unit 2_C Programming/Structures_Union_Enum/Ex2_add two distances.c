/*
 * main.c
 *
 *  Created on: Aug 20, 2023
 *      Author: mok
 */

#include<stdio.h>
struct Distance
{
	int feet;
	float inch;
};
int main(void)
{
	struct Distance d1,d2,sum;
	printf("Enter information for 1st distance: \n");
	printf("Enter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&d1.feet);
	printf("Enter inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&d1.inch);

	printf("\nEnter information for 2st distance: \n");
	printf("Enter inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&d2.feet);
	printf("Enter inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&d2.inch);

	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	while(sum.inch>=12)
	{
		sum.inch=sum.inch-12;
		sum.feet++;
	}
	printf("\nsum of distances=%d\'-%.1f\"",sum.feet,sum.inch);
}
