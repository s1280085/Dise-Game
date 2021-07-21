#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned int)time(NULL));
	
	int dice1, dice2;
	int sumDice;
	
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
	
	sumDice = dice1 + dice2;
	
	printf("Die 1: %d\n", dice1);
	printf("Die 2: %d\n", dice2);
	printf("Total value: %d\n", sumDice);
	return 0;
}