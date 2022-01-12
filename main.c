#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Exercice 1
/*
    int n_entre;

    do {
        printf("Donnez un nombre \n");
        scanf("%d", &n_entre);
    } while (n_entre < 1 || n_entre > 3);
*/
    //Exercice 2
/*
    int n_enter;

    do {
        printf("Donnez un nombre \n");
        scanf("%d", &n_enter);

        if(n_enter < 10){
            printf("Plus grand \n");
        }else{
            if(n_enter > 20){
                printf("Plus petit \n");
            }
        }
    } while (n_enter < 10 || n_enter > 20);
*/
    //Exercice 3
/*
    int n_enter, n_i;

    printf("Donnez un nombre entier\n");
    scanf("%d", &n_enter);

    for (n_i=1;n_i <= 10;n_i++) {
        printf("%d\n", n_enter + n_i);
    }
*/
    //Exercice 4
/*
    int n_enter, n_somme, n_i;

    printf("Donnez un nombre\n");
    scanf("%d", &n_enter);

    for (n_i=1;n_i <= n_enter;n_i++) {
        n_somme = n_somme + n_i;
    }

    printf("%d", n_somme);
*/
    //Exercice 5
/*
    int n_enter, n_somme = 1, n_i;

    printf("Donnez un nombre\n");
    scanf("%d", &n_enter);

    for (n_i=1;n_i <= n_enter;n_i++) {
        n_somme = n_somme * n_i;
    }

    printf("%d", n_somme);
*/
    //Exercice 6
/*
    int n_enter, n_grand = 0, n_position, n_i;

    for (n_i=1;n_i <= 20;n_i++) {
        printf("Entrez le nombre numero %d \n", n_i);
        scanf("%d", &n_enter);

        if (n_enter > n_grand) {
            n_grand = n_enter;
            n_position = n_i;
        }
    }

    printf("Le nombre numero %d qui contient %d est le plus grand !", n_position, n_grand);
*/
    //Exercice 7
/*
    int n_enter, n_grand=0, n_position, n_i=0;

    do {
        n_i++;
        printf("Entrez le nombre numero %d \n", n_i);
        scanf("%d", &n_enter);

        if (n_enter > n_grand) {
            n_grand = n_enter;
            n_position = n_i;
        }
    } while (n_enter != 0);

    printf("Le nombre numero %d qui contient %d est le plus grand !", n_position, n_grand);
*/
    //Exercice 8

    int n_enter, n_somme=0, n_dix, n_cinq, n_deux, n_un;

    do {
        printf("Quel est le prix de l'article ?\n");
        scanf("%d", &n_enter);
        n_somme = n_somme + n_enter;
    } while (n_enter !=0);

    printf("La somme totale est de %d, vous payez avec combien ?\n", n_somme);
    scanf("%d", &n_enter);
    n_somme = n_enter - n_somme;
    printf("On doit vous rendre %d euros\n", n_somme);

    n_dix = n_somme/10;
    n_somme = n_somme - 10 * n_dix;

    n_cinq = n_somme/5;
    n_somme = n_somme - 5 * n_cinq;

    n_deux = n_somme/2;
    n_somme = n_somme - 2 * n_deux;

    n_un = n_somme/1;
    n_somme = n_somme - 1 * n_un;

    printf("On vous rend %d billet de 10, %d billet de 5, %d piece de 2 et %d piece de 1", n_dix, n_cinq, n_deux, n_un);
}
