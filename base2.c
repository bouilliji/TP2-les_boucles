#include <stdio.h>
#include <limits.h>
#include <string.h>

void ecriture_binaire_positif(int n){

  //cas de base pour n == 1
    if (n == 1){
        printf("1");
        return ;
    }

    //cas de base pour n == 0
    if (n == 0){
        return ;
    }

    //appelle recursif
    ecriture_binaire_positif(n/2);
    printf("%d", n%2);
}

void representation_32_bits_positifs(int n){
    //creation d'un tableau qui contient les 32 chiffre en base 2
    int base2[32] = {0};
    int value = n;

    //on remplie le tableau de la fin vers le debut
    //par exemple un nombre impair a son bit de poids fable a 1 
    //soit le premier reste de la division euclidienne
    for (int i = 1; i < 32 || value != 0; i = i + 1){
        base2[32 - i] = value%2;
        value = value / 2;
    }

    //affichage des chiffre dans le bonne ordre
    for (int i = 0; i < 32; i = i + 1){
        printf("%d",base2[i]);
    }
}

int main(void){
  int n = 1 << 30;

  char *msg = "La ligne suivante doit Ãªtre";
  printf("%s 1", msg);
  for(unsigned int i=0; i<30; i=i+1){
    printf("0");
  }
  printf(" :\n");
  for(unsigned int i=0; i<strlen(msg); i=i+1){
    printf(" ");
  }
  ecriture_binaire_positif(n);
  printf("\n");
  representation_32_bits_positifs(n);


  printf("\n\n");
  printf("%s ", msg);
  for(unsigned int i=0; i<8*sizeof(int)-1; i=i+1){
    printf("1");
  }
  printf(" :\n");
  for(unsigned int i=0; i<strlen(msg); i=i+1){
    printf(" ");
  }
  ecriture_binaire_positif(INT_MAX);
  printf("\n");
  representation_32_bits_positifs(INT_MAX);
  printf("\n");
  
  return 0;
}