#include <stdio.h>
int main()
{
	int start = 10;
	int end = 99;
	int sum = 0;
	int divisor = 0;
	int num = start;

loop:   if (num <= end) {
		divisor = 2;
	loop2:  if (divisor < num) {
			if (num % divisor == 0) {
				goto loop1;
			}
			divisor = divisor + 1;
			goto loop2;
		}
		sum = sum + num;
	loop1: num = num + 1;
		goto loop;
	}
	printf("Sum of all two digit prime numbers: %d\n", sum);
}
