#include <stdio.h>
int main()
{
	int start = 1;
	int end = 9;
	int count = 0;
	int num = start;
loop:   if (num <= end) {
		if (num % 2 != 0) {
			count = count + 1;
		}
		num = num + 1;
		goto loop;
	}
	printf("The total number of single digit odd numbers: %d\n", count);
}
