/*
 * main.c
 *
 *  Created on: Jan 13, 2024
 *      Author: Shehab Aldeen
 */
#include "stdio.h"

int main(){
	int x,y,i;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	if(x==0)
		printf("Factorial = 1");
	else if (x>0){
	for(i=1,y=1;i<=x;i++)
		y*=i;
	printf("Factorial = %d",y);
	}
	else
		printf("Error! ! ! Factorial of negative number doesn't exist .");
	return 0;
}


