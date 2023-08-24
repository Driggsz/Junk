#include <stdio.h> 
#include <locale.h>


int main()

{

setlocale(LC_ALL, "Portuguese");
int nota1, nota2, nota3, nota4, media;
printf("Informe a nota 1: ");
scanf("%d",&nota1);
printf("Informe a nota 2: ");
scanf("%d",&nota2);
printf("Informe a nota 3: ");
scanf("%d",&nota3);
printf("Informe a nota 4: ");
scanf("%d",&nota4);
media = (nota1+nota2+nota3+nota4)/4;
if (media < 6)
printf("Reprovado, sua média foi %d:", media);
else if (media >= 6)
printf("Aprovado, sua média foi %d:", media);


return 0;
}	
