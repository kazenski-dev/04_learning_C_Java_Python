/*
Calcular a área de um círculo qualquer.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    //variables
	float area, raio, pi = 3.14;

	//Code
    printf("Insira o valor do RAIO (m): ");
    scanf("%f", &raio);
    area = pi * raio * raio;
    printf("A area do ciculo e: %.2f\n\a", area);

    return 0;
}
