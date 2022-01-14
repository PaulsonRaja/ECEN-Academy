#include <stdio.h>
int main()
{
	int start = 10;
	int end = 99;
	int count = 0;
	int num = start;
loop:   if (num <= end) {
		if (num % 2 != 0) {
			count = count + 1;
		}
		num = num + 1;
		goto loop;
	}
	printf("The total number of two digit odd numbers is: %d\n", count);
}
