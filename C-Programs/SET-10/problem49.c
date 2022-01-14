/*
 * Convert an integer array of up to 50 digits to character array and print
 * using print using “printf(“%s”, ....);”
 */

#include<stdio.h>
int main()
{
	int i = 0;
	int len = 0;
	int arr[50];
	char brr[50];

	printf("Enter the number of digits to be entered (max: 50):\n");
	scanf("%d", &len);
	
	printf("Enter integers upto %d digits (Press Enter After Each Digit):\n", len);
	for (i = 0; i < len; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < len; i++) {
		brr[i] = arr[i] + '0';
	}
	printf("Integer array to character array: %s\n", brr);
	return 0;
}
