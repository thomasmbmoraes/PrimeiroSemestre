// C?lculo do Premio do seguro rural

#include<stdio.h>
#include<stdlib.h>

float acev, ccev, atri, ctri, aave, cave, premio ;

main()
{
//  1. Ler dados	
	printf("Forneca o numero de acres da plantacao de CEVADA: ");
	scanf("%f", &acev);
	printf("Forneca a cobertura desejada para a plantacao de CEVADA: ");
	scanf("%f", &ccev);

	printf("Forneca o numero de acres da plantacao de TRIGO: ");
	scanf("%f", &atri);
	printf("Forneca a cobertura desejada para a plantacao de TRIGO: ");
	scanf("%f", &ctri);
	
	printf("Forneca o numero de acres da plantacao de AVEIA: ");
	scanf("%f", &aave);
	printf("Forneca a cobertura desejada para a plantacao de AVEIA: ");
	scanf("%f", &cave);
	
// 2. Calcular o valor do premio a ser pago a seguradora
	premio = (ccev*acev + ctri*atri + cave*aave) * 0.035;
	
// 3. Imprimir resultados
	printf("\n\nO valor do premio a ser pago a seguradora e %.2f\n\n", premio) ;

// 4. Terminar
	system("pause");
}

