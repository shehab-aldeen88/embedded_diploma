/*
 * main.c
 *
 *  Created on: Jan 13, 2024
 *      Author: Shehab Aldeen
 */
#include "stdio.h"

int main(){
	char x;
	int ascii;
	printf("Enter an alphabet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);
	ascii=x;
	if (x=='A'||x=='E'||x=='O'||x=='U'||x=='I'||x=='a'||x=='e'||x=='o'||x=='u'||x=='i')
		printf("%c is a vowel.",x);
	else if((ascii>=65 && ascii<=90)||(ascii>=97 && ascii<=122))
		printf("%c is a consonant.",x);
	else
		printf("%c is not an alphabet.",x);
	return 0;
}

