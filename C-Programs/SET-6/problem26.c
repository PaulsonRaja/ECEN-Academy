#include <stdio.h>
int main()
{
	int start = 100;
	int end = 999;
	int div = 2;
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
		goto loop3;
	loop2:  num = num + 1;
		goto loop;
	}
loop3:  printf("Smallest three digit prime number:%d\n", num);
}
