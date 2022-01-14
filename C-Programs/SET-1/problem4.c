#include <stdio.h>
int main()
{
	int x, y;
	printf("Enter a Three digit Number:");
	scanf("%d", &x);
	y = x / 10;
	y = y % 10;
	printf("The digit in Ten's position is %d\n", y);
}
