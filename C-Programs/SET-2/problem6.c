#include <stdio.h>
int main()
{
	int x, y;
	printf ("Enter a Two digit Number:");
	scanf("%d", &x);
	y = x % 10;
	x = x / 10;
	y = (y * 10) + x;
	printf ("The reverse of the entered number is: %d\n", y);
}
