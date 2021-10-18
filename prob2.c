/* 
	Author:			Emma Gillespie
	Date:				September 26th 2021
	Description:	A program that prints a pattern of stars using for and if statements
*/

#include<stdio.h>

int main()
{
	for(int row = 1; row < 8; ++row) { // Runs through each row
		
		printf("\t");
		
		for(int col = 0; col < 11; col++){ // Runs through each column
			
			if (((col % 2) == 1 && (row % 2) == 1) || ((row % 2) != 1 && (col == 0 || col == 10))) {
				// Conditions to print a o
				printf("o");
			} else { // Everything else prints a *
				printf("*");
			}
			
		}
		printf("\n");
	}

	return 0;
}
