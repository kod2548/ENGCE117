#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int count_vowels_with_pointer(char *str)
{
    int i;
    int count_vowels = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count_vowels++;
        }
    }
    return count_vowels;
}

int main()
{
    char sentence[MAX_SIZE];
    int vowel_count;

    printf("Enter a sentence: ");

    if (fgets(sentence, MAX_SIZE, stdin) == NULL)
    {
        return 1;
    }

    sentence[strcspn(sentence, "\n")] = '\0';

    vowel_count = 0;
    char *char_ptr = sentence;

    vowel_count = count_vowels_with_pointer(char_ptr);

    printf("\n--- STRING ANALYSIS REPORT ---\n");
    printf("Input String: \"%s\"\n", sentence);
    printf("Total Vowel Count: %d\n", vowel_count);
    return 0;
}
