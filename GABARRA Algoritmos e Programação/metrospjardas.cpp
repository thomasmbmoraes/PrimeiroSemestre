//conversao de metros para jardas

//declaras as bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declarar as variaveis
float tjardas, tmetros ;

main () 
{

// 1. ler tempo para 100 metros
printf("Informe o tempo para 100 metros: ");

scanf("%f", &tmetros);

//2. calcular o tempo para 100 jardas
tjardas = tmetros * 0.9144 ;

//3. imprimir resultado
printf("\nO tempo para 100 jardas e %f\n\n", tjardas);

//4. terminar
system("pause");


}
