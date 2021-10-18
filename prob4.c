/* 
	Author:			Emma Gillespie
	Date:				September 29th 2021
	Description:	A program that prints a pattern of stars using for and if statements
*/
#include<stdio.h>

int main() {
	
	// Variables
	short int aval = 100;
	int bval = 100;
	float cval = 100;
	double dval = 100;
	char eval = 100;
	unsigned char fval = 100;
	
	// Print respective address, size, value
	printf("%p %d %d\n", &aval, sizeof(aval), aval);
	printf("%p %d %d\n", &bval, sizeof(bval), bval);
	printf("%p %d %.2f\n", &cval, sizeof(cval), cval);
	printf("%p %d %.2lf\n", &dval, sizeof(dval), dval);
	printf("%p %d %c\n", &eval, sizeof(eval), eval);
	printf("%p %d %c\n", &fval, sizeof(fval), fval);

	return 0;

}
