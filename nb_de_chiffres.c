#include <assert.h>

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

int main(void){
  assert(nb_de_chiffres(0) == 0);
  assert(nb_de_chiffres(1) == 1);
  assert(nb_de_chiffres(9) == 1);
  assert(nb_de_chiffres(10) == 2);
  assert(nb_de_chiffres(99) == 2);
  assert(nb_de_chiffres(100) == 3);
  assert(nb_de_chiffres(865462) == 6);
  
  return 0;
}