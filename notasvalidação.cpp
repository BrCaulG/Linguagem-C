#include <stdio.h>

int main() {
    double nota, soma = 0;
    int notas_validas = 0;

    while (notas_validas < 2) {
        scanf("%lf", &nota);
        if (nota >= 0 && nota <= 10) {
            soma += nota;
            notas_validas++;
        } else {
            printf("nota invalida\n");
        }
    }

    printf("media = %.2f\n", soma / 2.0);

    return 0;
}
