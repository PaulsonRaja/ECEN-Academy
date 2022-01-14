/*
 * Adjust the carry in an integer array. (i.e. convert the 2 digit number
 * into single digit and add the carry to the next number).
 */

#include<stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	int carry = 0;
	int value = 0;
	int len = 0;
	int arr[50];
        int brr[100];
	
	printf("Enter the number of digits to entered (Max: 50):\n");
	scanf("%d", &len);

	printf("Enter %d digits (Press Enter After Each Digit):\n", len);
	for (i = 0; i < len; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = len - 1; i >= 0; --i) {
		value = arr[i] + carry;
		brr[k] = value % 10;
		carry = value / 10;
		k++;
	}
	if (carry != 0) {
		brr[k] = carry;
		k++;
		carry = 0;
	}

	
	for (i = k - 1; i >= 0; --i) {
		printf("%d ", brr[i]);
	}
	printf("\n");
	return 0;
}
