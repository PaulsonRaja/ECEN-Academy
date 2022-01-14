#include <stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	int len  = 0;
	char arr[50];
	char reverse[50];
	
	printf("Enter a number upto 50 digits:\n");
	scanf("%s", arr);

	while (arr[i] != '\0') {
		len = len + 1;
		i = i + 1;
	}


	for (i = len - 1; i >= 0; i--) {
		reverse[k] = arr[i];
		k = k + 1;
	}
	
	printf("The digits in the reverse order is: %s\n", reverse);
	return 0;
}
