#include <stdio.h>

float calculate_win_odds(int outs)
{
    int win_odds;

    win_odds = outs * 4.0;
    return win_odds;
}

int main()
{
    int card_outs;
    float win_probability;

    printf("Enter The Odds: ");
    scanf("%d", &card_outs);

    win_probability = calculate_win_odds(card_outs);

    printf("\n--- POKER PROBABILITY REPORT (2 Cards Remaining) ---\n");
    printf("Calculate Outs: %d\n", card_outs);
    printf("Win Probability (Odd x 4): %.2f%%\n", win_probability);

    printf("Assessment: ");

    if (win_probability >= 30)
    {
        printf("HIGH Win Probability");
    }
    else
    {
        printf("LOW Win Probability");
    }

    return 0;
}
