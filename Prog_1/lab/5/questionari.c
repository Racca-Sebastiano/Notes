#include <stdio.h>

#define NUM_RISP 20

void print_stars(size_t count)
{
	for (size_t i = 0; i < count; i++)
	{
		putchar('#');
	}
}

int main()
{
	// valori delle risposte ai questionari
	const int risposte[NUM_RISP] = {
		1, 2, 5, 4, 3, 5, 2, 1, 3, 1,
		4, 3, 3, 3, 2, 3, 3, 2, 2, 5};

	// calcola le frequenze delle risposte
	int frequenze[5] = {0};
	for (size_t i = 0; i < NUM_RISP; i++)
	{
		frequenze[risposte[i] - 1]++;
	}

	printf("Stelle  Frequenza\n");
	for (size_t i = 0; i < 5; i++)
	{
		printf("%6ld %10d   ", i + 1, frequenze[i]);
		print_stars(frequenze[i]);
		putchar('\n');
	}
}
