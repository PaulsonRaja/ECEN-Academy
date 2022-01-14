#include <stdio.h>
int main()
{
	int x, y;
	printf ("Enter a Three digit number:");
	scanf("%d", &x);
	y = x % 10;
	printf("The digit in One's Position is %d\n", y);
}
