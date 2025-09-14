#include <stdio.h>

int main() {
    int n, a, b, i, p1, p2;

    while (scanf("%d", &n) == 1 && n != 0) {
        p1 = 0;
        p2 = 0;
        i = 0;
        while (i < n) {
            scanf("%d %d", &a, &b);
            if (a > b) {
                p1++;
            } else if (b > a) {
                p2++;
            }
            i++;
        }
        printf("%d %d\n", p1, p2);
    }

    return 0;
}
