#include<stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
    int n, i, s=0; 

    printf("Informe o n�mero:");
    scanf("%d", &n);

    for(i=n;i>=0;i--){

        printf("%d \n",i);
        s = s + i;

    }

    printf("%d",s);
    return 0;
}