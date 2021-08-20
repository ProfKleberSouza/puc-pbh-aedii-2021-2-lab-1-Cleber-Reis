#include <stdio.h>
#include "functions.h"

int main() {

    int a, b, s ;
  
    scanf("%d %d", &a, &b);
    s = somar(a, b);
    printf("SOMA = %d\n", s);

    return(0);
}