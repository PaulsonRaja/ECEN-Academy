/*
 * My O/P: 193
 */

#include <stdio.h>
int main()
{
	int start = 0;
	int end = 1000;
	int count = 1;
	int rem = 0;
	int val = 0;
	int num = start;

loop:   if (num <= end) {
		val = num;
	loop1:  if (val > 0) {
			rem = val % 10;
			if (rem == 0) {
				count = count + 1;
			}
			val = val / 10;
			goto loop1;
		}
		num = num + 1;
		goto loop;
	}
	printf("Number of zeroes encountered between 0 and 1000: %d\n", count);
}
