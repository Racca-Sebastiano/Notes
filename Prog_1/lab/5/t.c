#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int prop[5] = {0};
    char pwd[20];
    scanf("%20s", pwd);
    size_t i;
    for (i = 0; i < 20 && pwd[i] != '\0'; i++)
    {
        char curr = pwd[i];
        if (isdigit(curr))
        {
            prop[0] = 1;
        }
        if (!isalpha(curr))
        {
            prop[1] = 1;
        }
        if (isupper(curr))
        {
            prop[2]++;
        }
        if (i > 0 && isdigit(curr) && isdigit(pwd[i - 1]))
        {
            prop[3] = 1;
        }
    }

    if (ispunct(pwd[i - 1]) && ispunct(pwd[i - 2]))
    {
        prop[4] = 1;
    }

    printf("%s %d %d %d %d %d", pwd, prop[0], !prop[1], prop[2] >= 2, prop[3], prop[4]);
}