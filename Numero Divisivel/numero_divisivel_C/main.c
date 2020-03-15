/*Desenvolver um algoritmo que leia um número inteiro e verifique
se o número é divisível por 5 e por 3 ao mesmo tempo.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int numero;

    //Main Code
    printf("Insira o valor do numero: \n");
    scanf("%d", &numero);
    if ((numero % 3 == 0) && (numero % 5 == 0)){
        printf("Numero divisivel por 3 e 5.");
    } else {
        printf("Numero nao divisivel por 3 e 5.");
    }
    return 0;
}
