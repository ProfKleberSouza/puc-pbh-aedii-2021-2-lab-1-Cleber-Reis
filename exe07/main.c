#include <stdio.h>
#include "functions.h"

int main() 
{
    int x = 18, y = 60;
    int resp;

    resp = mdc(x, y);
    printf("%d\n", resp);
    
    return(0);
}