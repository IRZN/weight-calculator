#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, contador = 0, peso, pesomaior = 0, media = 0, i = 0, menor = 0;

    do{
        printf ("Digite seu peso: \n");
        scanf ("%i", &peso);
        i++;

        if (peso >= 60) {
            soma = soma + peso;
            contador++;
        }
        if (contador > 0) {
            media = soma / contador;
        } else {
            contador = 0;
        }
        if (peso > pesomaior) {
            pesomaior = peso;
        }
    }while(i < 30);

    printf ("O maior peso eh %i \n", pesomaior);
    printf ("A media dos pesos maiores que 60 eh %i \n", media);
    printf ("A quantidade de pesos maiores de 60 eh %i \n", contador);

    return 0;
}
