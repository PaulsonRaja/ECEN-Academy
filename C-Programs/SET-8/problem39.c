#include <stdio.h>
int main()
{
	char string[100];
	int  array[100];
	int i = 0;

	printf("Enter a string:\n");
	scanf("%s", string);

	printf("Intger value of the string:");

	for (int i = 0; string[i]!= '\0'; i++) {
		array[i] = string[i] - '0';
		printf("%d", array[i]);
	}
	printf("\n");
}
