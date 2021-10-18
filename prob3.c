/* 
	Author:			Emma Gillespie
	Date:				September 26th 2021
	Description:	A program that prints a pattern of stars using for and if statements
*/

#include<stdio.h>

int main() {
	
	// Variables
	int userNum;
	int sum = 0;
	float average;
	
	for(int count = 1; count < 10; count++) { // For loop that gets the sum of all numbers
		printf("Please enter number %d:", count);
		scanf("%d", &userNum);
		sum += userNum; // Adds each number to get sum
	}
	
	printf("Sum is: %d\n", sum);
	
	if ((sum % 2) == 1) { // Checks if it is odd
		printf("The sum is odd.\n");
	} else { // Everything else is even
		printf("The sum is even.\n");
	}
	
	average = sum / 9.0;
	printf("The average is: %.2f\n", average); // Prints average

	return 0;
}
