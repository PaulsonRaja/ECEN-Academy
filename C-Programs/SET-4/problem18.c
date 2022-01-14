#include <stdio.h>
int main()
{
	int start = 10;
	int end = 99;
	int sum = 0;
	int num = start;

loop:   if (num <= end) {
		if (num % 2 != 0) {
			sum = sum + num;
		}
		num = num + 1;
		goto loop;
	}
	printf("Sum of all two digit odd numbers: %d\n", sum);
}
