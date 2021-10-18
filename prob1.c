/* 
	Author:			Emma Gillespie
	Date:				September 26th 2021
	Description:	A program that prints a pattern of stars using for and if statements
*/

#include<stdio.h>

int main()
{
	for(int row = 1; row < 11; ++row) { // Creates the rows
		
		int starRow = 11;
		if(row > 1) { // Makes sure One doesn't get written over
			starRow = row;
		}
		
		printf("\t");
		
		for(int col = 0; col < 10; col++){// Creates the columns
			
			if(col >= 9 || !(col >= starRow - 1 && col < 10)) { // Sets the conditions for 
				printf("* ");
			} else { // Everything else is a space
				printf("  ");
			}
			
		}
		printf("\n");
	}

	return 0;
}
