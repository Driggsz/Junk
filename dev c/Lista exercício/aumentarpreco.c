#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
    float vrProduto = 0;
    float vrFinal = 0;
    printf("Digite o valor do produto: \n");
    scanf("%f", &vrProduto);
    if (vrProduto < 100) {
    	vrFinal = vrProduto * 0.2 + vrProduto;
        printf("O valor final �: %0.2f ", vrFinal);
	} 
	else if(vrProduto >= 100) {
    	vrFinal = vrProduto * 0.1 + vrProduto;
    	printf("O valor final �: %0.2f ", vrFinal);
	}
    return 0;
}                                                                                                                                                                                                                        