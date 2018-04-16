// main.c 
//
// This program takes two numbers from the console and displays the sum 
// and product of them, as well as the number of digits in the product
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>  // NOLINT

int get_number()
{
	int result;

	printf("Enter a positive number:\n");
	scanf(" %d", &result);

	while (result < 0)
	{
		printf("Entered number is not positive, please reenter a positive number:\n");
		scanf(" %d", &result);
	}

	return result;
}

int num_digits(int const number)
{
	long n = number;
	int count = 0;

	while (n != 0)
	{
		n /= 10;
		++count;
	}

	return count;
}

void main(void)
{
	int const input1 = get_number();
	int const input2 = get_number();
	int const sum = input1 + input2;
	int const product = input1 * input2;

	printf("The sum of %d and %d is %d\n\n", input1, input2, sum);
	printf("The product of %d and %d is %d\n\n", input1, input2, product);
	printf("%d has %d digits.\n\n", input1 * input2, num_digits(product));
}
