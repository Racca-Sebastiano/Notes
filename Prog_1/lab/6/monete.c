#include <stdio.h>

#define NUM_TAGLI 6

int cambio_taglio(int ammontare, int taglio);

int main(void)
{
	int cent;
	printf("Scrivere l'ammontare da convertire in monete: ");
	scanf("%d", &cent);

	const int tagli_monete[NUM_TAGLI] = {1, 2, 5, 10, 20, 50};
	for (int i = NUM_TAGLI - 1; i >= 0; i--)
	{
		int taglio = tagli_monete[i];
		int count = cambio_taglio(cent, taglio);
		if (count > 0)
		{
			printf("%d da %d cent\n", count, taglio);
		}
		cent -= taglio * count;
	}
	return 0;
}

int cambio_taglio(int ammontare, int taglio)
{
	int count = 0;
	for (; ammontare - taglio >= 0; count++)
	{
		ammontare -= taglio;
	}
	return count;
}
