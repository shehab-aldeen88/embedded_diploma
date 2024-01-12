/*
 * main.c
 *
 *  Created on: Jan 13, 2024
 *      Author: Shehab Aldeen
 */
#include "stdio.h"

int main(){
	float a,b;
	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a = %f",a);
	printf("\nAfter swapping, value of b = %f",b);
	return 0;
}
