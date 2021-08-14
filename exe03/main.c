#include <stdio.h>
#include "functions.h"

int main() {

    int v[1000];
    int n;
    int maior = 0, menor = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    menor_maior(v, n, &menor, &maior);

    printf("\n\tMenor = %d\n", menor);
    printf("\n\tMaior = %d\n\n", maior);

  return(0);
}