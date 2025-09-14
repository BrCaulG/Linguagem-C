#include <stdio.h>

int main() {
    int n, i, p, vencedor, teste = 1;

    while (scanf("%d", &n) == 1 && n != 0) {
        i = 1;
        while (i <= n) {
            scanf("%d", &p);
            if (p == i) {
                vencedor = p;
            }
            i++;
        }
        printf("Teste %d\n", teste);
        printf("%d\n\n", vencedor);
        teste++;
    }

    return 0;
}
