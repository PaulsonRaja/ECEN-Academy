/*
 *  My O/P: 1218
 */

#include <stdio.h>
int main()
{
	int start = 2;
	int end = 1000000;
	int count = 0;
	int rem = 0;
	int div = 0;
	int prime = 0;
	int sum = 0;
	int num = start;

loop:   if (num <= end) {
		div = 2;
		sum = 0;
	loop1:  if (div * div <= num) {
			if (num % div == 0) {
				goto loop2;
			}
			div = div + 1;
			goto loop1;
		}
		prime = num;
	loop3:  if (prime > 0) {
			rem = prime % 10;
			sum = sum + rem;
			if (sum > 14) {
				goto loop2;
			}
			prime = prime / 10;
			goto loop3;
		}
		if (sum == 14) {
			count = count + 1;
		}
	loop2:  num = num + 1;
		goto loop;
	}
	printf("Total number of prime numbers below 1,000,000 having sum of their digits equal to 14: %d\n", count);
}
