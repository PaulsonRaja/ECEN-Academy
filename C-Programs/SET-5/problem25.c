#include <stdio.h>
int main()
{
	int start = 100;
	int end = 999;
	int sum = 0;
	int divisor = 0;
	int num = start;

loop:   if (num <= end) {
		divisor = 2;
	loop1:  if (divisor < num) {
			if (num % divisor == 0) {
				goto loop2;
			}
			divisor = divisor + 1;
			goto loop1;
		}
		sum = sum + num;
	loop2:  num = num + 1;
		goto loop;
	}
	printf("Sum of all three digit prime numbers: %d\n", sum);
}
