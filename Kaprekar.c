#include <assert.h>
#include <stdbool.h>

int nb_de_chiffres(int n){
    int value = n;
    int nb_chiffres = 0;
    while (value > 0){
        //enlève le dernier chiffre du nombre
        value = value / 10;
        nb_chiffres = nb_chiffres +1;
    }
    return nb_chiffres;
}

bool Kaprekar(int n){
    int value = n * n;
    int nb_chiffres = nb_de_chiffres(value);
    int puissance = 10; 
    for (int i = 0; i < nb_chiffres; i = i + 1){
        //value / puissance partie de gauche du nombre, value % puissance partie de droite du nombre
        if ((value / puissance) + (value % puissance) == n){
            return true;
        }
        //prend en compte un chiffre de plus a droite et un de moin a gauche
        puissance = puissance * 10;
    }
    return false;
}


int main(void){
  assert(Kaprekar(703));
  assert(Kaprekar(4879));
  assert(!Kaprekar(4329));
  
  return 0;
}