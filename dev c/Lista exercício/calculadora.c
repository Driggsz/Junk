#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	float valorA = 0;
	float valorB = 0;
	int operacao = 0;
	do{
	printf("Digite o primeiro valor: ");
	scanf("%f", &valorA);
	printf("Digite o segundo valor: ");
	scanf("%f", &valorB);
	printf("\n 1-SOMA \n  2-SUBTRA��O \n  3-MULTIPLICA��O \n  4-DIVIS�O \n");
	printf("Escolha qual opera��o deseja realizar: ");
	scanf("%i", &operacao);
	switch(operacao){
		case 1:
			printf("O resultado �: %0.2f", valorA + valorB);
			break;
		case 2:
			printf("O resultado �: %0.2f", valorA - valorB);
			break;
		case 3:
			printf("O resultado �: %0.2f", valorA * valorB);
			break;
		case 4:
			printf("O resultado �: %0.2f", valorA / valorB);
			break;
	}
	}while (0);
	return 0;
}                                                                                                                 