#include<stdio.h>
int main()
{
	int i = 0;
	int len = 0;
	char arr[100];

	printf("Enter a string:\n");
	scanf("%s", arr);
      
	while (arr[i] != '\0') {
		len = len + 1;
		i = i + 1;
	}
	
	printf("The length of the string is: %d\n", len);
	return 0;
  
}
