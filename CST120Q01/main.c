// main.c 
//
// This program calculates celsius to farenheit conversion
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>  // NOLINT

void main(void)
{
	char run_again;

	int play_game = 1;

	while (play_game)
	{
		printf("Would you like to convert from Celsius to Farenheit (enter 1) or from Farenheit to Celsiius (enter 0)? \n");

		int choice;

		scanf("%d", &choice);

		while (choice != 1 && choice != 0)
		{
			printf("Not a valid input, please re-enter either 1 or 0.\n");
			printf("Enter a choice: ");

			scanf(" %d", &choice);
		}

		if (choice == 1)
		{
			printf("Please enter a temperature in Celsius: ");

			int celsius;
			scanf("%d", &celsius);

			double const farenheit = ((9.0 / 5) * celsius) + 32;

			printf("%d degrees Celsius is %f degrees Farenheit.\n\n", celsius, farenheit );
		}
		else if (choice == 0)
		{
			printf("Please enter a temperature in Farenheit: ");

			int farenheit;
			scanf("%d", &farenheit);

			double const celsius = (5.0 / 9) * (farenheit - 32);

			printf("%d degrees farenheit is %f degrees celsius.\n\n", farenheit, celsius );
		}
	
		printf("Would you like to convert another temperature? Please enter y or Y to redo: ");

		scanf(" %c", &run_again);

		// ASCII Values for Y and y, respectivly
		if( run_again == 89 || run_again == 121)
		{
			play_game = 1;
		}
		else
		{
			play_game = 0;
		}
	}
}
