#include <stdio.h>

int main()
{
    int I, N, Soma;
    
    printf("Deseja a tabuada para qual valor? ")
    scanf("%d", &N);
    
    for (I = 1; I <=10; I++) {
     Soma = N * I;
     
     printf("%d X %d = %d \n ", N, I, Soma);
        
    }

    return 0;
}
