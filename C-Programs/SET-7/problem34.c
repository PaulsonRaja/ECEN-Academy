/*
 * My O/P: 1099
 */

#include <stdio.h>
int main()
{
	int start = 0;
	int end = 100000;
	int reverse = 0;
	int count = 0;
	int val = 0;
	int rem = 0;
	int num = start;

loop:   if (num <= end) {
		val = num;
		reverse = 0;
	loop1:  if (val > 0 ) {
			rem = val % 10;
			reverse = reverse * 10 + rem;
			val = val / 10;
			goto loop1;
		}
		if (num == reverse) {
			count = count + 1;
		}
		num = num + 1;
		goto loop;
	}
	printf("Number of palindrome numbers less than 100000: %d\n", count);
}
