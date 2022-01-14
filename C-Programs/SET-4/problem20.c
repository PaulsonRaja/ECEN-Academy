#include <stdio.h>
int main()
{
	int start = 2;
	int end = 9;
	int divisor = 0;
	int count = 0;
	int num = start;

loop1:   if (num <= end) {
		divisor = 2;
	loop3:   if (divisor < num) {
			if (num % divisor == 0){
				goto loop2;
			}
			divisor = divisor + 1;
			goto loop3;
		}
		count = count + 1;
	loop2:  num = num + 1;
		goto loop1;
	}
	printf("The total number of single digit prime numbers are: %d\n", count);
}
