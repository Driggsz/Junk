#include <stdio.h>
#include <locale.h>


int main()
{
    int n;
    int contador = 0;


    printf("Numero: ");
    scanf("%d", &n);

    while(contador <= n){
        printf("%d \n", contador);
        contador++;

    }

    return 0;
}
