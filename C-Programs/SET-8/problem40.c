#include <stdio.h>
int main()
{
	int a;
	char ch[100];
	int reverse = 0;
	int rem = 0;
	int i = 0;
	
	printf("Enter an integer:\n");
	scanf("%d", &a);

	while (a > 0) {
		rem = a % 10;
		reverse = reverse * 10 + rem;
		a = a / 10;
	}
	
	while (reverse > 0) {
		rem = reverse % 10;
		ch[i] = rem + '0';
		reverse = reverse / 10;
		i++;
	}
	
	printf("Integer to string: %s\n", ch);
}
