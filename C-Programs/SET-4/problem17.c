#include <stdio.h>
int main()
{
	int start = 0;
	int end = 9;
	int sum = 0;
	int num = start;

loop:   if (num <= end) {
		if (num % 2 != 0) {
			sum = sum + num;
		}
		num = num + 1;
		goto loop;
	}
	printf("The sum of all single digit odd numbers: %d\n", sum);
}
