/*
 * main.c
 *
 *  Created on: Jan 13, 2024
 *      Author: Shehab Aldeen
 */
#include "stdio.h"

int main(){
	int x,y;
	printf("Enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d\n%d",&x,&y);
	printf("Sum: %d",x+y);
	return 0;
}
