#include <stdio.h>
int main()
{
	int x, y;
	printf("Enter a Three digit Number:");
	scanf("%d", &x);
	y = (x / 100) + (x / 10) % 10 + (x % 10);
	printf("The sum of the digits of entered number is %d\n", y);
}
