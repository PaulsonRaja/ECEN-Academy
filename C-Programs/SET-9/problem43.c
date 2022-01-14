#include<stdio.h>
int main()
{
	int i = 0;
	int flag = 0;
	char arr[50];

	printf("Enter a string:\n");
	scanf("%s", arr);
	for (i = 0; arr[i] != '\0'; i++) {
		if (arr[i] < '0' ||  arr[i] > '9') {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		printf("Not a valid number.\n");
	} else {
		printf("Valid number.\n");
	}
	return 0;  
}
