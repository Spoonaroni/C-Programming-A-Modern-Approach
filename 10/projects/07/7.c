#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_DIGITS 10

// external variables
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                             {0, 1, 1, 0, 0, 0, 0},
                             {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1},
                             {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1},
                             {1, 1, 1, 0, 0, 0, 0},
                             {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1}};
char digits[4][MAX_DIGITS * 4];
const int segment_grid[7][2] = {{0, 1},
                                {1, 2},
                                {2, 2},
                                {2, 1},
                                {2, 0},
                                {1, 0},
                                {1, 1}};
// prototypes
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
	char num;
	int pos = 0, amount = 0;

	clear_digits_array();
	printf("Enter a number: ");
	while ((num = getchar()) != '\n' && amount <= MAX_DIGITS - 1) {
		if (isdigit(num)) {
			process_digit((num - '0'), pos);
			pos += 4;
			amount++;
		}
	}
	print_digits_array();
	

	return 0;
}

void clear_digits_array(void)
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < MAX_DIGITS * 4; j++) {
			digits[i][j] = ' ';
		}
	}
}

void process_digit(int digit, int position)
{
	int row, col;

	for (int i = 0; i < 7; i++) {
		if (segments[digit][i]) {
			row = segment_grid[i][0];
			col = segment_grid[i][1] + position;
			digits[row][col] = i % 3 == 0 ? '_' : '|';
		}
	}
}

void print_digits_array(void)
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < MAX_DIGITS * 4; j++) {
			putchar(digits[i][j]);
		}
		printf("\n");
	}
}
