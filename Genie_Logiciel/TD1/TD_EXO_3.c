#include <stdlib.h>
#include <stdio.h>

int main()
{
    char figure;
    float longeur, largeur, cote;
    printf("C pour Carre ou R pour Rectangle\n");
    scanf("%c",&figure);
    if(figure == 'C' || figure == 'c')
        {
            printf("Quelle est la longeur du cote? \n");
            scanf("%f", &cote);
            printf("L'aire du carre est de %.2f\n", cote*cote);
        }
    else if(figure == 'R' || figure == 'r')
        {
            printf("Quelle est la longeur? \n");
            scanf("%f", &longeur);
            printf("Quelle est la largeur? \n");
            scanf("%f", &largeur);
            printf("L'aire du rectangle est de %.2f\n", longeur*largeur);
        }
    else 
        {
            printf("Erreur de saisie\n");
        }
    return 0;
}