
#include <stdio.h>

int main()
{
    int age = 10;
    int joueurs = 3;
    int adulte = 1;
    int reservation = 1;

    if (reservation == 0)
    {
        printf("Réservation obligatoire");
    }
    else if (joueurs < 2)
    {
        printf("Groupe trop petit");
    }
    else if (joueurs > 6)
    {
        printf("Groupe trop grand");
    }
    else if (age < 10)
    {
        printf("Accès refusé");
    }
    else if (age <= 13)
    {
        if (adulte == 1 && joueurs >= 3)
        {
            printf("Accès autorisé");
        }
        else
        {
            printf("Accès refusé");
        }
    }
    else if (age <= 17)
    {
        if (joueurs >= 4 || adulte == 1)
        {
            printf("Accès autorisé");
        }
        else
        {
            printf("Accès refusé");
        }
    }
    else
    {
        printf("Accès autorisé");
    }

    return 0;
}
