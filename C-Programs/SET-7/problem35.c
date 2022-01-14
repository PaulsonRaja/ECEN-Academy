#include <stdio.h>
int main()
{
	int num_1 = 0;
	int num_2 = 0;
	int div = 2;
	int ans = 1;

	printf("Enter two numbers to calculate LCM:");
	scanf("%d %d", &num_1, &num_2);
loop:   if (div <= num_1) {
		if (num_1 % div == 0) {
			if (num_2 % div == 0) {
				ans = ans * div;
				num_1 = num_1 / div;
				num_2 = num_2 / div;
			} else {
				div = div + 1;
			}
		} else {
			div = div + 1;
		}
		goto loop;
	}
	ans = ans * num_1 * num_2;
	printf("LCM: %d\n", ans);
}
