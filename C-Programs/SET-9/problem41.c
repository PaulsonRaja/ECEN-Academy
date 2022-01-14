#include <stdio.h>
int main()
{
	int i = 0;
	int len = 0;
	int num = 0;
	int reverse = 0;
	int rem = 0;
	char arr[100];
	
	printf("Enter an integer:\n");
	scanf("%d", &num);

	while (num > 0) {
		rem = num % 10;
		reverse = reverse * 10 + rem;
		num = num / 10;
	}
	
	while (reverse > 0) {
		rem = reverse % 10;
		arr[len] = rem + '0';
		len = len + 1;
		reverse = reverse / 10;
	}
	
	for (i = 0; i < len; i++) {
		printf("%c\n", arr[i]);
	}
	return 0;
}
