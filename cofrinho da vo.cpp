#include <stdio.h>

int main() {
    int n, j, z, i, teste = 1;
    
    while (scanf("%d", &n) == 1 && n != 0) {
        int diferenca_total = 0;
        
        printf("Teste %d\n", teste);
        
        i = 0;
        while (i < n) {
            scanf("%d %d", &j, &z);
            diferenca_total += (j - z);
            printf("%d\n", diferenca_total);
            i++;
        }
        printf("\n");
        teste++;
    }

    return 0;
}
