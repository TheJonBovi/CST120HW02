#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main(void)
{
	int input;
	printf("Here is a sample output with a prompt: ");

	scanf("%d", &input);

	printf("Here is the inputted number: %d \n", input);

	// Below prevents console window from closing after program completion
	while (getchar() != '\n');
	printf("press enter to continue...\n");
	getchar();
}