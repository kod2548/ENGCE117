#include <stdio.h>

int main()
{
    int N_CALCULATIONS, i;
    int Attacker_Level, Opponent_Level, Opponent_Armor;
    float baseAttack, damageReduction, netDamage, damageDeficit;
    const float WORTH_THRESHOLD = 150.0;

    if (scanf("%d", &N_CALCULATIONS) != 1)
    {
        return 1;
    }

    for (i = 0; i < N_CALCULATIONS; i++)
    {

        if (scanf("%d %d %d", &Attacker_Level, &Opponent_Level, &Opponent_Armor) != 3)
        {
            break;
        }

        baseAttack = Attacker_Level * 10.0;

        if (Opponent_Armor < 50)
        {
            damageReduction = 0.20;
        }
        else if (Opponent_Armor >= 50)
        {
            damageReduction = 0.40;
        }

        netDamage = baseAttack * (1.0 - damageReduction);

        if (netDamage >= WORTH_THRESHOLD)
        {
            printf("SUCCESS! Net Damage: %.2f\n", netDamage);
        }
        else if (netDamage < WORTH_THRESHOLD)
        {
            damageDeficit = WORTH_THRESHOLD - netDamage;
            printf("FAIL. Deficit: %.2f\n", damageDeficit);
        }
    }

    return 0;
}