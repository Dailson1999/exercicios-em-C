#include <stdio.h>
#include <stdlib.h>

int main() {
	int operacao;
	float numero1, numero2, resposta;
	
	printf("Somar digite 1\n");
	printf("Subtrair digite 2\n");
	printf("Multiplicar digite 3\n");
	printf("Dividir digite 4\n");
	scanf("%d", &operacao);
		
	if(operacao == 1){
		printf("Digite o primeiro numero\n");
		scanf("%f", &numero1);
		printf("Digite o segundo numero\n");
		scanf("%f", &numero2);
		resposta = (numero1 + numero2);
		printf("Soma de %2.f e %2.f eh %2.f", numero1, numero2, resposta);
	}else if(operacao == 2){
		printf("Digite o primeiro numero\n");
		scanf("%f", &numero1);
		printf("Digite o segundo numero\n");
		scanf("%f", &numero2);
		resposta = (numero1 - numero2);
		printf("Subtracao de %2.f e %2.f eh %2.f", numero1, numero2, resposta);
	}else if(operacao == 3){
		printf("Digite o primeiro numero\n");
		scanf("%f", &numero1);
		printf("Digite o segundo numero\n");
		scanf("%f", &numero2);
		resposta = (numero1 * numero2);
		printf("Multiplicacao de %2.f e %2.f eh %2.f", numero1, numero2, resposta);
	}else{
		printf("Digite o primeiro numero\n");
		scanf("%f", &numero1);
		printf("Digite o segundo numero\n");
		scanf("%f", &numero2);
		resposta = (numero1 / numero2);
		printf("Divisao de %2.f e %2.f eh %2.f", numero1, numero2, resposta);
	}
	
	return 0;
}
