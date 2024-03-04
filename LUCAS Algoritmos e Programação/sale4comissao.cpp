/*
	Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa que receba o salário
	fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu salário final.
*/

//bibliotecas
	
	#include <stdio.h>
	#include <stdlib.h>
	
//estrutura principal

	int main() {
	
	//1. declarar variáveis
	
	float salfixo, salecomissao;
	
	//2. apresentar informações aos usuários
	
	printf("Informe o salario atual: ");
	
	//3.  receber informações via teclado (formatador e endereço de varoável)
	
	scanf("%f", &salfixo);
	
	//4. calculo
	
	salecomissao = salfixo + (salfixo * 0.04);
	
	//4. apresentar resultado
	
	printf("\n\nO salario somado com a comissao e: %.2f\n\n", salecomissao);
	
	//5. finalizar
	
	return 0;
	
}
	