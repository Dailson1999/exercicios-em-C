#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;
    printf("Digite o dia de nascimento:\n");
    scanf("%d", &dia);
    printf("Digite o mes de nascimento:\n");
    scanf("%d", &mes);
    printf("Digite o ano de nascimento:\n");
    scanf("%d", &ano);

    int passo1=((dia*100)+mes+ano);
    int passo2=(passo1/100)+(passo1%100);
    int valor=passo2 % 5;

    printf("\n");
    switch(valor)
    {
    case 0:
        printf("Timido\n");
    break;
    case 1:
        printf("Sonhador\n");
    break;
    case 2:
        printf("Paquerador\n");
    break;
    case 3:
        printf("Atraente\n");
    break;
    case 4:
        printf("Irresistivel\n");
    break;
    }
    return 0;
}
