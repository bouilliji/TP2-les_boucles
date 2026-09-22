#include <stdio.h>

int entier_suivant(int n){
    int m = n * n;

    //ajoute un zero si besoin
    if (m / 10000000 == 0){//le nombre a 7 chiffres
        m = m*10;
    }

    return (m%1000000)/100;//enlève les deux premier chiffre et les deux dernier
}

void apparition_de_n(int n){
    printf("0\n");
    int suite_value = n;
    for (int i = 1; i < 1001; i = i + 1){
        suite_value = entier_suivant(suite_value);
        if (suite_value == n){
            printf("%d\n", i);
        }
    }
}

int somme_apparition_de_n(int n){
    int nb_itteration = 0;
    int suite_value = n;
    for (int i = 1; i < 1001; i = i + 1){
        suite_value = entier_suivant(suite_value);
        if (suite_value == n){
            nb_itteration = nb_itteration + 1;
        }
    }
    return nb_itteration;
}

void entier_le_plus_represente(){
    int plus_grand = 0;
    for (int i = 1000; i < 10000; i = i + 1){
        int nb_itteration = somme_apparition_de_n(i);
        if (nb_itteration > plus_grand){
            plus_grand = nb_itteration;
            printf("%d : %d\n", plus_grand, i);
        }
        else if (nb_itteration == plus_grand){
            printf("%d : %d\n", plus_grand, i);
        }
    }
}

int main(){

    printf("%d\n", entier_suivant(1111));
    printf("%d\n", entier_suivant(3432));

    apparition_de_n(1111);

    printf("\n\n nb_itteration : nombre");
    entier_le_plus_represente();
    return 0;
}