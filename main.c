#include <stdio.h>

int main(void) {
    /*
    //Exercice 1 :
    int entier1, entier2;
    printf("choisir un entier :\n");
    scanf("%d", &entier1);
    printf("choisir un entier :\n");
    scanf(" %d", &entier2);
    if (entier1 < entier2) {
        printf("L'entier le plus grand est:\n %d", entier2);
    }
    else {
        printf("L'entier le plus grand est:\n %d", entier1);
    }

//Exercice 2
    int longueur, largeur;
    printf("Donner la longueur du rectangle :\n");
    scanf("%d", &longueur);
    printf("Donner la largeur du rectangle :\n");
    scanf(" %d", &largeur);
    printf("Le perimetre est %d \net l'aire est %d",(longueur + largeur)*2, longueur*largeur);

//Exercice 3
    const int entier;
    printf("choisir un entier :\n");
    scanf("%d", &entier);
    if(entier%3==0 && entier>=10) {
        printf("l'entier est un multiple de 3 et superieur ou egal a 10");
    }
    else {
        printf("n'est un multiple de 3 ou n'est pas superieur ou egal a 10");
    }

// Exercice 4
    int age,statut;
    printf("marquer votre age :\n");
    scanf("%d", &age);
    printf("Marquer 1 si vous etes etudiant et 0 sinon :\n");
    scanf(" %d", &statut);
    if (age<12) {
        printf("Le billet coute 4 euros");
    }
    else if (age >11 && age<17)  {
        printf("Le billet coute 6 euros");
    }
   else if (age<27 && statut==1) {
        printf("Le billet coute 6 euros");
    }
   else if (age>65) {
        printf("Le billet coute 6 euros");
    }
   else {
        printf("Le billet coute 9 euros");
    }

    // Exercice 5:
    int numBoisson = 0;
    printf("Entrer le numero de la boisson\n");
    scanf("%d", &numBoisson);
    if (numBoisson == 1 || numBoisson == 2 || numBoisson == 3) {
        printf("Vous avez selectionne la boisson froide %d", numBoisson);
    }
    else if (numBoisson == 10 || numBoisson == 11) {
        printf("La boisson selectionne est la boisson chaude %d",numBoisson);
    }
    else {
        printf("Aucune boisson ne correspond à ce code");
    }

    // Exercice 6 :
    float nb1, nb2, nb3;
    printf("Donner trois nombres : \n");
    scanf("%f %f %f",&nb1, &nb2, &nb3);
    if (0>nb1 || 20<nb1) {
        printf("choisir une autre note");
        scanf("%f",&nb1);
    }
    if (0>nb2 || 20<nb2) {
        printf("choisir une autre note");
        scanf("%f",&nb2);
    }
    if (0>nb3 || 20<nb3) {
        printf("choisir une autre note");
        scanf("%f",&nb3);
    }
    printf("La moyenne est : %f",(nb1+nb2+nb3)/3);

    //Exercice 7
    int nbClasses, nbEleve,total=0, i=0;
    printf("Entrer le nombre de classes :\n");
    scanf("%d",&nbClasses);
    for (i=1;i<(nbClasses+1);i++) {
        printf("Donner le nombre d eleves de la classe %d \n",i);
        scanf("%d",&nbEleve);
        total=total+nbEleve;
    }
    printf("Le nombre total d'eleves est : %d",total);

    //Exercice 8
    int nb;
    printf("Donner un entier :\n");
    scanf("%d",&nb);
    while(nb%2!=0 || nb%7!=0 ) {
        printf("Ressaisissez un nombre : \n");
        scanf("%d",nb);
    }

    //Exercice 9:
    int nbPierres=0, nbEtages=0;
    printf("Donner le nombre de pierres : \n");
    scanf("%d",&nbPierres);
    while (nbPierres>=((nbEtages+1)*(nbEtages+1))) {
        nbEtages=nbEtages+1;
        nbPierres=nbPierres-nbEtages*nbEtages;
    }
    printf("Il est possible de construire %d etages", nbEtages);
    */
    //Exercice 10

    return 0;
}
