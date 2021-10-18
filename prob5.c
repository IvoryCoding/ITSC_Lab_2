/* 
	Author:			Emma Gillespie
	Date:				September 29th 2021
	Description:	A program that prints a pattern of stars using for and if statements
*/
#include<stdio.h>

int main() {

	// Variables
	int usrVal = 0, rem1, rem2, rem3, rem4, rem5;
	int flag = 1;
	
	while(flag == 1){ // Flag for loop
	
		printf("\tPlease enter anumer from the ramge 0 to 65535 inclusive: ");
		scanf("%d", &usrVal);
	
		if (usrVal <= 65535) { // Any number smaller then 65535
			
			// Gets each value of remainder
			rem1 = usrVal % 16;
			usrVal /= 16;
			rem2 = usrVal % 16;
			usrVal /= 16;
			rem3 = usrVal % 16;
			usrVal /= 16;
			rem4 = usrVal % 16;
			usrVal /= 16;
			rem5 = usrVal % 16;
			usrVal /= 16;
			
			printf("  Your number as a hexadecimal (reversed) is: %X%X%X%X%X\n\n", rem1, rem2, rem3, rem4, rem5); // Prints the reversed hex value 
		
		} else { // Any number larger then 65535
			printf("\n\t\tQuitting!\n");
			printf("\t\t%d is larger than 65535!", usrVal);
			flag = 0;
		}
	}

	return 0;
}
