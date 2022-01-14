#include <stdio.h>
int main()
{
	int i = 0;
	int first_non_zero_digit_index = 0;
	char arr[50];
	
	printf("Enter a string with leading zeroes:\n");
	scanf("%s", arr);

	for (i = 0; arr[i] != '\0'; i++) {
		if (arr[i] != '0') {
			first_non_zero_digit_index = i;
			break;
		}   
	}

	for (i = 0; arr[first_non_zero_digit_index] != '\0'; i++) {
		arr[i] = arr[first_non_zero_digit_index];
		first_non_zero_digit_index = first_non_zero_digit_index + 1;
	}
	arr[i] = '\0';

	printf("String without leading zeroes: %s\n", arr);
	return 0;
}
