#include <stdio.h>
int main()
{
	int x, y;
	printf("Enter a Four digit number:");
	scanf("%d", &x);
	int a = x % 10;
	int b = (x / 10) % 10;
	int c = (x / 100) % 10;
	int d = x / 1000;
	y = (a * 1000) + (b * 100) + (c * 10) + (d * 1);
	printf("The reverse of the entered number is %d\n", y);
}
