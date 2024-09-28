

#include <stdio.h> 
#include <string.h>

int main(){
    
    char titres[100][100];
    char auteur[100][50];
    char titRecherche[100];
    float  prix[100];
    int  quantites[100];
    int  nombrelivre = 0;
    int  i, j, choix, nvquantite;
    float nvprix;


    do {
        printf("Systeme de Gestion de Stock dans une Librairie Objectif\n");
        printf("1/ Ajouter un livre au stock.\n");
        printf("2/ Afficher tous les livres disponibles.\n");
        printf("3/ Rechercher un livre par son titre.\n");
        printf("4/ Mettre a jour la quantite d'un livre.\n");
        printf("5/ Supprimer un livre du stock.\n");
        printf("6/ Afficher le nombre total de livres en stock.\n");
        printf("7/ Quitter\n");
        scanf("%d", &choix);

    
        switch(choix) {

            case 1:           // Ajouter un livre

            if (nombrelivre >= 100){
                printf("-le stock est plein!!\n");
                break;
            }
                printf("-le titre de livre :\n");
                getchar();
                fgets(titres[nombrelivre], 100, stdin);
                titres[nombrelivre][strcspn(titres[nombrelivre], "\n")]='\0';

                printf("-le titre d'auteur :\n");
                getchar();
                fgets(auteur[nombrelivre], 100, stdin);
                auteur[nombrelivre][strcspn(auteur[nombrelivre], "\n")]='\0';

                printf("-le prix du livre :\n");
                scanf("%f",&prix[nombrelivre]);

                printf("-La quantite en stock :\n");
                scanf("%d", &quantites[nombrelivre]);

                nombrelivre++;
                printf("livre ajoute.");

            
            break;

            case 2:         // Afficher tous les livres disponibles

            if (nombrelivre == 0)
            {
                printf("auncun livre en stock.\n");
                break;
            }
            for ( i = 0; i < nombrelivre; i++)
            {
                printf("-livre %d :\n", i + 1 );
                printf(" titre : %s\n", titres[i]);
                printf(" auteur : %s\n", auteur[i]);
                printf(" prix :%.2f\n", prix[i]);
                printf(" quautite dans le stock : %d \n", quantites[i]);

            }
            
            break;

            case 3:    // Rechercher un livre par son titre

                 if (nombrelivre == 0) {
                    printf("-Stock est vide!!\n");
                    break;
                }

                printf("-Entrer le titre du livre a rechercher :\n");
                getchar();
                fgets(titRecherche, 100, stdin);
                titRecherche[strcspn(titRecherche, "\n")] ='\0';

                int livreT = 0;
                for ( i = 0; i < nombrelivre; i++)
                {
                    if(strcmp(titres[i], titRecherche) == 0){
                        printf("-livre %d :\n", i + 1 );
                        printf("-titre : %s\n", titres[i]);
                        printf("-auteur : %s\n", auteur[i]);
                        printf("-prix :%.2f\n", prix[i]);
                        printf("-quautite dans le stock : %d \n", quantites[i]);
                        livreT = 1;
                        break;
                    }

                }
                if (livreT == 0){
                    printf("-livre non trouver !!\n");
                }
                break;

            case 4:      // Mettre à jour la quantité d un livre

                if (nombrelivre == 0) {
                    printf("-Stock est vide!!\n");
                    break;
                }

                printf("-Entrer le titre du livre a Mettre a jour :\n");
                getchar();
                fgets(titRecherche, 100, stdin);
                titRecherche[strcspn(titRecherche, "\n")] ='\0';

                livreT = 0;
                for ( i = 0; i < nombrelivre; i++){
                    if(strcmp(titres[i], titRecherche) == 0){
                        printf("-entrer la nouvelle quantite\n");
                        scanf("%d", &nvquantite);
                        quantites[i] = nvquantite;
                        printf("-quontite changer \n");
                        livreT =1;
                        break;
                     }
                if (livreT == 0){
                    printf("-livre non trouver!!\n");
                }
                break;
                }


            case 5:    // Supprimer un livre du stock

                if (nombrelivre == 0) {
                    printf("-Stock est vide!!\n");
                    break;
                }

                printf("-Entrer le titre du livre a asuprimer :\n");
                getchar();
                fgets(titRecherche, 100, stdin);
                titRecherche[strcspn(titRecherche, "\n")] ='\0';

                
                for ( i = 0; i < nombrelivre; i++) {
                    if (strcmp(titres[i], titRecherche) == 0) {
                        for (j = i; j < nombrelivre - 1; j++)
                        {
                           strcpy(titres[j], titres[j + 1]);
                           strcpy(auteur[j], auteur[j + 1]);
                           prix[j] = prix[j + 1];
                           quantites[j] = quantites[j + 1];
                        }
                    
                    nombrelivre--;
                    printf("-livre suprime \n");
                    livreT = 1;
                    break;
                    }

                }
                if (livreT == 0){
                    printf("-livre non trouver!!\n");
                }
                break;

            case 6:         // Afficher le nombre total de livres en stock

                if (nombrelivre == 0) {
                    printf("-Stock est vide!!\n");
                    break;
                }
                 int totaleS = 0;
                for ( i = 0; i < nombrelivre; i++)
                {
                    totaleS += quantites[i];
                }
                printf("-le totale du stock est : %d \n", totaleS);

                break;



            case 7: //quiter
                
                break;
            default:
            printf("-choix invalide \n");

        }


      

    }while (choix != 7);

      
    
    return 0;
}
