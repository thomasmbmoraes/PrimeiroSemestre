// Conversão de graus celcius para farenheit

#include <stdio.h>
#include <stdlib.h>

int celcius, farenheit;
		//declarando inteiro, não será possível imprimir resultados com virgúla
		// casso eu decida mudar eu teria que declara outra %

main()
{
		// 1. ler temperatura em graus celcius
				// escreva a mensagem
			printf("Entre a temperatura em graus celcius: ");
				// %i = código do tipo de varível que o programa vai ler
				// %i = CÓDIGO DE FORMATAÇÃO PARA A FUNÇÃO
			scanf("%i", &celcius);

		// 2. calcular temperatura e graus farenheit
			farenheit = celcius * 9 / 5 + 32 ;

		// 3. imprimir resultados
			printf("A temperatura em farenheit e: %i\n\n", farenheit);

		// 4. terminar
			system("pause");
}