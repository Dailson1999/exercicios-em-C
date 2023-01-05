#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f",&nota1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f",&nota2);

    media = (nota1 + nota2) / 2;

    printf("\n");
    if(media >= 7)
    {
        printf("Aluno aprovado!\n");
    }
    else if(media >= 3)
    {
        printf("Aluno esta de recuperacao!\n");
    }
    else
    {
        printf("Aluno reprovado!\n");
    }

    printf("Media do aluno = %.1f\n",media);

    system("pause");
    return 0;
}
