#include <stdio.h>

int main() {
    int n;
    
    while (scanf("%d", &n) == 1 && n != 0) {
        char comando;
        int direcao_atual = 0;
        int i = 0;

        while (i < n) {
            scanf(" %c", &comando);
            if (comando == 'D') {
                direcao_atual = (direcao_atual + 1) % 4;
            } else if (comando == 'E') {
                direcao_atual = (direcao_atual + 3) % 4;
            }
            i++;
        }

        if (direcao_atual == 0) {
            printf("N\n");
        } else if (direcao_atual == 1) {
            printf("L\n");
        } else if (direcao_atual == 2) {
            printf("S\n");
        } else {
            printf("O\n");
        }
    }
    
    return 0;
}
