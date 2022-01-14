/*
 * My O/P: 126
 */

#include <stdio.h>
int main()
{
	int start = 1000;
	int end = 9999;
	int count = 0;
	int ones_place = 0;
	int tens_place = 0;
	int hundred_place = 0;
	int thousand_place = 0;
	int num = start;

loop:   if (num <= end) {
		ones_place = num % 10;
		tens_place = (num / 10) % 10;
		hundred_place = (num / 100) % 10;
		thousand_place = num / 1000;
		if (thousand_place < hundred_place) {
			if (hundred_place < tens_place) {
				if (tens_place < ones_place) {
					count = count + 1;
				}
			}
		}
		num = num + 1;
		goto loop;
	}
	printf("Total number of non-decreasing numbers from 1000 to 9999: %d\n", count);
}
