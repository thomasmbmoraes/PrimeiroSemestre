/*APLICAÇÕES DE ALGORITMOS

	Embora a velocidade da luz seja constante, não importando a velocidade relativa da
fonte e do observador, o comprimento de onda e a freqüência mudam - um efeito
previsto pela primeira vez por Johann Doppler e conhecido como o "Efeito Doppler". O
"comprimento de onda" emitido por uma fonte movendo-se em direção ao observador
com uma velocidade "v" é comprimido por uma quantidade "variação de comprimento de onda", que é dada pela fórmula:

			comprimento de onda = velocidade*comprimento de onda
									--------------------------
												c
											
	onde c é a velocidade da luz. Suponha que um avião esteja voando em direção a uma
estação de rádio com uma velocidade constante de 360 km/h (104 cm/s). Se a estação
de rádio está emitindo num comprimento de onda de 30 metros, a mudança no
comprimento de onda devido ao "Efeito Doppler" é:

	comprimento de onda = velocidade*comprimento de onda  =  (10^4cm/s)*(3*10^3cm)	= 10^-3cm
							--------------------------         -----------------
										c							3*10^10cm/s

QUESTÃO
	Então, o piloto do avião deve ajustar o receptor para um comprimento de onda de 3,000
cm menos 10-3cm, ou seja, 2999.999 cm, enquanto está se aproximando da estação, e
então para o comprimento de onda de 3000.001 cm enquanto estiver se afastando da
estação (observação: utilizar padrão americano: ponto separando casas decimais).
i) Preparar um algoritmo para ler o coprimento de onda emitido pela estação e a
velocidade de aproximação do avião, e então, imprimir o valor real de 2 com o qual
o piloto receberá o sinal.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float comprimentodeonda, velocidadedeaprox, deltacomprimentodeonda;
	
	printf("Qual e o comprimento de onda emitido pela estacao em m: ");
	scanf("%f", &comprimentodeonda);
	
	printf("\n\nQual e a velocidade de aproximacao do aviao em m/s: ");
	scanf("%f", &velocidadedeaprox);
	
	deltacomprimentodeonda = (velocidadedeaprox*comprimentodeonda)/300000000;
	
	printf("\n\nO valor real de comprimento de onda e: %f\n\n", deltacomprimentodeonda);
	
	return 0;
	
	
}



