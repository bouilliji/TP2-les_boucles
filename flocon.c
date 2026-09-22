#include <stdio.h>

void alternance(int n1, int n2, int ligne){
    for (int i = 0; i < ligne; i = i + 1){
        if (i%2 == 0){
            for (int j = 0; j < n1; j = j + 1){
                printf("*");
            }
        } else {
            for (int j = 0; j < n2; j = j + 1){
                printf("*");
            }
        }
        printf("\n");
    }
}

void croix_negative(int n){
    int value = 2* (n/2) +1;
    for (int i = 0; i < value; i = i + 1){
        for (int j = 0; j < value +1; j = j + 1){
            
            if (i == j || j == value - i){
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main(void){

    alternance(5,3,8);
    printf("\n");

    croix_negative(8);
    printf("\n");
    croix_negative(9);
    printf("\n");

    return 0;
}