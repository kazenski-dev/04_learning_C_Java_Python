/*
Dados quatro números distintos pelo usario, desenvolver um algoritmo
que determine e imprima a soma dos três menores.
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
    //Variables
    int numero1, numero2, numero3, numero4, soma;

    //Main Code

    printf("Digite o numero: \n");
    scanf("%d",&numero1);
    printf("Digite o numero: \n");
    scanf("%d",&numero2);
    printf("Digite o numero: \n");
    scanf("%d",&numero3);
    printf("Digite o numero: \n");
    scanf("%d",&numero4);

    printf("\n");

    if(numero1 > numero2 && numero1 > numero3 && numero1 > numero4){
        soma = (numero2 + numero3 + numero4);
        printf("Soma = %d\n",soma);
    } else if(numero2 > numero1 && numero2 > numero3 && numero2 > numero4){
        soma = numero1 + numero3 + numero4;
        printf("Soma = %d\n",soma);
    } else if(numero3 > numero1 && numero3 > numero2 && numero3 > numero4){
        soma = numero1 + numero2 + numero4;
        printf("Soma = %d\n",soma);
    } else if(numero4 > numero1 && numero4 > numero2 && numero4 > numero3){
        soma = numero1 + numero2 + numero3;
        printf("Soma = %d\n",soma);
    }

    return 0;
}
