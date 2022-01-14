#include <stdio.h>
int main()
{
	int x, y;
	printf ("Enter a Three digit Number:");
	scanf("%d", &x);
	y = x / 100;
	printf ("The digit in Hundreds position is %d\n", y);
}
