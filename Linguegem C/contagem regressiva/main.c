#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite um numero para contagem regressiva:\n");
    scanf("%d", &n);

    printf("\n");

    for(n = n; n > 0; n--)
    {
        printf("%d ",n);
    }
    return 0;
}
