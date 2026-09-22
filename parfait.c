#include <assert.h>
#include <stdbool.h>

bool parfait(int n){
    int somme = 0;
    for (int i = 1; i < n; i = i + 1){
        //i divise n
        if (n%i == 0){
            somme = somme + i;
        }
    }

    return somme == n;
}

int main(void){
  assert(parfait(6));
  assert(!parfait(15));
  assert(parfait(8128));
  assert(parfait(33550336));
  assert(!parfait(64726437));
  
  return 0;
}