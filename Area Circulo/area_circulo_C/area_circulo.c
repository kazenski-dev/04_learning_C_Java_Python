/*
Calcular a área de um círculo qualquer
*/

#include <stdio.h>
#include <stdlib.h>

int area_circulo () {

    //variables
	float area, raio, pi = 3,14;

	//Main Code
    printf("Insira o valor do RAIO (m): ");
    scanf("%f", &raio);
    area = pi * raio * raio;
    printf("A área do cículo é: ", area, " m³");

    return 0;
}



