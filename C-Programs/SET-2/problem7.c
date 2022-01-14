#include <stdio.h>
int main()
{
	int x, y;
	printf("Enter a Three digit Number: ");
	scanf("%d", &x);
	int a = x % 10;
	int b = (x / 10) % 10;
	int c = x / 100;
	y = (a * 100) + (b * 10) + c;
	printf("The reverse of the entered number is %d\n", y);
  
}
