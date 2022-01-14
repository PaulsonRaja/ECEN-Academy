/*
 * Add two integer arrays of up to 50 digits and store the result in a 51 digits array
 *
 */

#include <stdio.h>
int main()
{
	char _num1[50];
	char _num2[50];
	int num1[50];
	int num2[50];
	int result[51];
	int i = 0;
	int k = 50;
	int carry = 0;
	
	printf("Enter the first number upto 50 digits:\n");
	scanf("%s", _num1);
	printf("Enter the second number upto 50 digits:\n");
	scanf("%s", _num2);


        /* Convert the char array to int array */
	for (i = 0; i < 50; i++) {
		num1[i] = _num1[i] - '0';
		num2[i] = _num2[i] - '0';	
	}
	printf("\n");



        /* Printing the int array got from char array */
	printf("First integer array:\n");
	for (i = 0; i < 50; i++) {
		printf("%d ", num1[i]);
	}
	printf("\n\n");
	

	printf("Second integer array:\n");
	for (i = 0; i < 50; i++) {
		printf("%d ", num2[i]);
	}
	printf("\n\n");



	for (i = 49; i >= 0; --i) {
		result[k] = num1[i] + num2[i] + carry;
		if (result[k] > 9) {
			carry = result[k] / 10;
			result[k] = result[k] % 10;
		} else {
			carry = 0;
		}
		k--;
	}
	if (carry != 0) {
		result[k] = carry;
		carry = 0;
	}

	printf("Answer:\n");
	for (int i = 0; i < 51; i++) {
		printf("%d ", result[i]);
	}
	printf("\n\n");
	return 0;
}
