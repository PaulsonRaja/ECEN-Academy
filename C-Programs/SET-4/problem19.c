#include <stdio.h>
int main()
{
	int start = 100;
	int end = 999;
	int sum = 0;
	int num = start;

loop:  if (num <= end) {
		if (num % 2 != 0) {
			sum = sum + num;
		}
		num = num + 1;
		goto loop;
	}
	printf("The sum of all the three digit odd numbers is: %d\n", sum);
}
