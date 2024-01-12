/*
 * main.c
 *
 *  Created on: Jan 13, 2024
 *      Author: Shehab Aldeen
 */
#include "stdio.h"

int main(){
	float x,y;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f\n%f",&x,&y);
	printf("Product: %f",x*y);
	return 0;
}
