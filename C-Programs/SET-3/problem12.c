#include <stdio.h>
int main()
{
	int x, y;
	printf("Enter the number:");
	scanf("%d", &x);
	y = 0;
loop: if (x != 0) {
		int rem = x % 10;
		y = y * 10 + rem;
		x = x / 10;
		goto loop;
	}
	printf("The reverse of the entered number is %d\n", y);
}
