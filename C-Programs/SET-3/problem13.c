#include <stdio.h>
int main()
{
	int x, y;
	printf("Enter the number:");
	scanf("%d", &x);
loop:   if (x != 0) {
		int rem = x % 10;
		y = y + rem;
		x = x / 10;
		goto loop;
	}
	printf("The sum of the digits of entered number is %d\n", y);
}
