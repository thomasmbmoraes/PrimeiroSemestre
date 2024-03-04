/* Calcular o valor do salário-família que um colaborador
 deverá receber. Para o pagamento do salário-família tem-se:
 quem recebe salário até R$ 806,60 receberá adicional de
 R$ 41,37 por filho e - quem recebe acima desse salário 
 receberá R$ 29,16 por filho.*/

// 1. bibliotecas

#include <stdio.h>
#include <stdlib.h>

// 2. declarar variaveis

float salario, adicional, filhos ;

// 3. main

main () 
{
	
	// 4. perguntas
	
	printf("Informe o valor do salario atual: ");
	scanf("%f", &salario);
	
	printf("\nInforme a quantidade de filhos: ");
	scanf("%f", &filhos);
	
	// 5. calculo e respostas
	
	if (salario>806.60)
		{
			salario = salario + (29.16 * filhos);
			printf("\n\nO valor do salario familia sera %.2f", salario);
		}
	else
		{
			salario = salario + (41.37 * filhos);
			printf("\n\nO valor do salario familia sera %.2f", salario);
		}
	
	// 6. fim
	
	return 0;
}