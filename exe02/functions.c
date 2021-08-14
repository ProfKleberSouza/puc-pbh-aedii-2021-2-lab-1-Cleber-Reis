
#include "functions.h"

int menor(int vet[], int n)
{
    int men = vet[0];
    for(int i = 0; i < n; i++)
    {
        if(vet[i] < men)
        {
            men = vet[i];
        }
    }
}
return men;
