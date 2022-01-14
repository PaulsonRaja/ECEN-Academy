#include <stdio.h>
int main()
{
	int start = 100;
	int end = 999;
	int count = 0;
	int divisor = 0;
	int num = start;

loop:	if (num <= end) {
		divisor = 2;
	loop2:  if (divisor < num) {
			if (num % divisor == 0) {
				goto loop1;
			}
			divisor = divisor + 1;
			goto loop2;
		}
		count = count + 1;
	loop1:  num = num + 1;
		goto loop;
	}
	printf("Total number of three digit numbers: %d\n", count);
}
