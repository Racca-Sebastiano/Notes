#include <stdio.h>
#include <stdbool.h>

// Prototipo della funzione:
bool verifica_primalita(int num);

int main(void)
{
	for (int i = 0; i <= 100; i++)
	{
		if (verifica_primalita(i))
		{
			printf("%d ", i);
		}
	}
	puts("");
	return 0;
}

bool verifica_primalita(int num)
{
	bool is_prime = false;
	if (num >= 2)
	{
		is_prime = true;
		// printf("%d", num / 2);
		for (int i = 2; i < (num / 2)+1; i++)
		{
			// printf("num=%d,i=%i,modulo=%d\n", num, i, num % i);
			if (num % i == 0)
			{
				is_prime = false;
			}
		}
	}
	return is_prime;
}
