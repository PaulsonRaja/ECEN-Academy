#include <stdio.h>
int main()
{
	int start = 1000;
	int end = 9999;
	int div = 0;
	int ans = 0;
	int num = start;

loop:   if (num <= end) {
		div = 2;
	loop1:  if (div < num) {
			if (num % div == 0) {
				goto loop2;
			}
			div = div + 1;
			goto loop1;
		}
		ans = num;
	loop2:  num = num + 1;
		goto loop;
	}
	printf("Largest 4-digit prime number: %d\n", ans);
}
