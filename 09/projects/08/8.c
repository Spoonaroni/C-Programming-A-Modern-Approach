#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
	int wins = 0, losses = 0;
	char n;
	srand((unsigned) time(NULL));

	while (true) {
		if (play_game()) 
			wins++;
		else 
			losses++;
		

		printf("Play again? ");
		scanf(" %c", &n);
		if (n != 'y' && n != 'Y')
			break;
		printf("\n");
	}

	printf("Wins: %d  Losses: %d\n", wins, losses);

	return 0;
}

int roll_dice(void)
{
	int num1 = (rand() % 6) + 1, 
		num2 = (rand() % 6) + 1;

	return num1 + num2;
}

bool play_game(void)
{
	int point, roll;

	roll = roll_dice();
	printf("You rolled: %d\n", roll);

	if (roll == 7 || roll == 11) {
		printf("You win!\n\n");
		return true;
	} else if (roll == 2 || roll == 3 || roll == 12) {
		printf("You lose!\n\n");
		return false;
	} else {
		point = roll;
		printf("Your point is %d\n", point);
	}

	while (true) {
		roll = roll_dice();
		printf("You rolled: %d\n", roll);

		if (roll == point) {
			printf("You win!\n\n");
			return true;
		}
		else if (roll == 7) {
			printf("You lose!\n\n");
			return false;
		}
	}

	return false;
}
