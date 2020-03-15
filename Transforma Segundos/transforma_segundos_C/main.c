/*Construa uma sequência de instruções para indicar quantos
dias, horas, minutos e segundos equivalem a quantidade que o usuário indica em segundos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int segundos, minutos, horas, dias;

    //Main Code
    printf("Indique a quantidade em segundos: ");
    scanf("%d", &segundos);
    printf("Calculando com segundos...\n\n");

    minutos = segundos / 60;
    horas = minutos / 60;
    dias = horas / 24;

    printf("%d segundos sao equivalentes a:\n\n%d- minutos\n%d- horas\n%d- dias", segundos, minutos, horas, dias);

    return 0;
}
