/*
 * Get a number string up to 50 digits and convert it to integer array.
 *
 */

#include <stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	char arr[50];
	int brr[50];
	
	printf("Enter a string up to 50 digits:\n");
	scanf("%s", arr);
	for (i = 0; arr[i] != '\0'; i++) {
		brr[i] = arr[i] - '0';
	}

	for (k = 0; k < i; k++) {
		printf("%d", brr[k]);
	}
	printf("\n");
	return 0;
}
