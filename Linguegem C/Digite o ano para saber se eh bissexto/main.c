#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    printf("Digite o ano para saber se eh bissexto: ");
    scanf("%f", &ano);

    if(ano % 400==0)
    {
        printf("Esse ano eh bissexto!");

    }
    else if((ano % 4==0)&&(ano % 100!=0))
    {
        printf("Esse ano eh bissexto!");
    }
    else
    {
        printf("Esse ano nao eh bissexto!");
    }

    return 0;
}
