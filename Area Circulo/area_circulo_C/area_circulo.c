/*
Calcular a �rea de um c�rculo qualquer
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
    printf("A �rea do c�culo �: ", area, " m�");

    return 0;
}



