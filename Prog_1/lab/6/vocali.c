#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_vowel(char c);
bool esistono_vocali(char *str);
void stampa_vocali(char *str);

int main(void)
{
    char str[100];
    scanf("%s", str);
    printf("%d\n", esistono_vocali(str));

    printf("vocali: ");
    stampa_vocali(str);
    return 0;
}

bool is_vowel(char c)
{
    char *vowels = "AEIOUaeiou";
    return strchr(vowels, c) != NULL;
}

bool esistono_vocali(char *str)
{
    bool exist = false;
    for(size_t i = 0; i < strlen(str); i++) {
        if(is_vowel(str[i])) {
            exist = true;
        }
    }
    return exist;
}

void stampa_vocali(char *str)
{
    for (size_t i = 0; i < strlen(str); i++)
    {
        if(is_vowel(str[i])) {
            printf("%c ", str[i]);
        }
    }
}