#include <stdio.h>
#include <stdlib.h>

int validate_char_array(char *num);
int len_of_char_array(char *num);
void char_array_to_int_array(char *arr, int *brr);
void add_leading_zeroes(int *arr, int *len, int no_of_zeroes_to_add);
void remove_leading_zeroes(int *arr, int *len);
void add_two_numbers(int *arr, int *brr, int len1,  int *result, int *size);
void reverse_array(int *arr, int size);
void print_array(int *num, int size);
	
int validate_char_array(char *num)
{
	for (int i = 0; num[i] != '\0'; i++) {
		if (num[i] >= '0' && num[i] <= '9') {
			continue;
		} else {
			return 0;
		}
	}
	return 1;
}

int len_of_char_array(char *num)
{
	int i = 0;
	int len = 0;

	while (num[i] != '\0') {
		len++;
		i++;
	}
	return len;
}

void char_array_to_int_array(char *arr, int *brr)
{
	for (int i = 0; arr[i] != '\0'; i++) {
		brr[i] = arr[i] - '0';
	}
}

void add_leading_zeroes(int *arr, int *len, int no_of_zeroes_to_add)
{
	int size = *(len);
	int diff = no_of_zeroes_to_add;
	int i = 0;

	while (diff--) {
		for (i = size - 1; i >= 0; --i) {
			arr[i + 1] = arr[i];
		}
		size = size + 1;
	}

	for (i = 0; i < no_of_zeroes_to_add; i++) {
		arr[i] = 0;
	}
	
	*len = *len + no_of_zeroes_to_add;
}

void remove_leading_zeroes(int *arr, int *len)
{
	int i = 0;
	int k = 0;
	int flag = 0;
	int size = *(len);

	if (arr[i] != 0) {
		return;
	}
	for (i = 0; i < size; i++) {
		if (arr[i] != 0) {
			flag = i;
			break;
		}
	}

	for (i = flag; i < size; i++) {
		arr[k] = arr[i];
		k++;
	}
	*len = k;
}

void add_two_numbers(int *arr, int *brr, int len1,  int *result, int *size)
{
	int i = 0;
	int len = 0;
	int carry = 0;

	for (int i = len1 - 1; i >= 0; --i) {
		result[len] = arr[i] + brr[i] + carry;
		if (result[len] > 9) {
			carry = result[len] / 10;
			result[len] = result[len] % 10;
		} else {
			carry = 0;
		}
		len++;
	}
	if (carry != 0) {
		result[len] = carry;
		len++;
	}
	*size = len;
}

void reverse_array(int *arr, int size)
{
	int tmp = 0;
	for (int i = 0; i < size/2; i++) {
		tmp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = tmp;
	}
}


void print_array(int *num, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d", num[i]);
	}
	printf("\n\n");
}

int main()
{
	char _num1[50];
	char _num2[50];
	int num1[50];
	int num2[50];
	int result[51];
	int size = 51;
	int diff = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int ret1 = 0;
	int ret2 = 0;
	int len1 = 0;
	int len2 = 0;

	/* Getting the two number upto 50 digits */
	printf("Enter the first number upto 50 digits:\n");
	scanf("%s", _num1);
	printf("Enter the second number upto 50 digits:\n");
	scanf("%s", _num2);



	/* Validate whether the input contain only numbers */
	ret1 = validate_char_array(_num1);
	ret2 = validate_char_array(_num2);



	/* Do not proceed further if the input entered is invalid */
	if (ret1 != 1 || ret2 != 1) {
		printf("Please enter valid numbers.\n");
		exit(0);
	}
	

	
	/* Calculate the length of the input since the input of uneven of size */
	len1 = len_of_char_array(_num1);
	len2 = len_of_char_array(_num2);

	

	/* Convert the character array to integer array easy for addition operation*/
	char_array_to_int_array(_num1, num1);
	char_array_to_int_array(_num2, num2);
	
	
	diff = len1 - len2;

	if (diff > 0) {
		add_leading_zeroes(num2, &len2, diff);
	}

	if (diff < 0) {
		diff = diff * -1;
		add_leading_zeroes(num1, &len1, diff);
	}



	
	/* Printing the input in intger format after adding 
         * leading zeroes  which would be easy for addition.
	 */
	printf("\n");
	printf("Printing the First Integer Number:\n");
	print_array(num1, len1);
	printf("Printing the Second Integer Number:\n");
	print_array(num2, len2);
	printf("\n");


	
	add_two_numbers(num1, num2,  len1, result,  &size);
	reverse_array(result, size);
	remove_leading_zeroes(result, &size);

	printf("Answer:\n");
	print_array(result, size);
	return 0;
}
