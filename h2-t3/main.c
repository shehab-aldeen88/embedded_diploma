/*
 * main.c
 *
 *  Created on: Jan 13, 2024
 *      Author: Shehab Aldeen
 */
#include "stdio.h"

int main (){
	float x,y,z;
	printf("Enter three numbers : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f\n%f\n%f",&x,&y,&z);
	float p=x;
	if(y>p)
		p=y;
	if(z>p)
		p=z;
	printf("Largest number = %f",p);
	return 0;
}
