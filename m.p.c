

#include <stdio.h> 
#include <string.h>

int main(){
    
    char titres[100][100];
    char auteur[100][50];
    char titRecherche[100];
    int  prix[100];
    int  quantites[100];
    int  nombrelivre = 0;
    int  i, j, choix; 

    do {
        printf("Système de Gestion de Stock dans une Librairie Objectif");
        printf("1/ Ajouter un livre au stock.");
        printf("1/ Afficher tous les livres disponibles.");
        printf("3/ Rechercher un livre par son titre.");
        printf("4/ Mettre à jour la quantité d'un livre.");
        printf("5/ Supprimer un livre du stock.");
        printf("6/ Afficher le nombre total de livres en stock.");
        printf("7/ Quitter");
        scanf("%d", &choix)

    
        switch{
            case 1:
            if (nombrelivre >= 100){
                printf("-le stock est plein!!\n");
                break;
                printf("-le titre de livre :\n");
                getchar();
                fgets(titre[nombrelivre], 100, stdin);
                titre[nombrelivre][strcspn(titre[nombrelivre], "\n")]='\0';

                printf("-le titre d'auteur :\n");
                getchar();
                fgets(auteur[nombrelivre], 100, stdin);
                auteur[nombrelivre][strcspn(auteur[nombrelivre], "\n")]='\0';

                printf("-le titre d'auteur :\n");


                
                printf("-le titre d'auteur :\n");




            }

        }


    }while (choix != 0)

  return 0
}