#include <stdio.h>

int main() {
    int n, i = 0;
    double v1, v2, v3, media;

    scanf("%d", &n);

    while (i < n) {
        scanf("%lf %lf %lf", &v1, &v2, &v3);
        media = (v1 * 2.0 + v2 * 3.0 + v3 * 5.0) / 10.0;
        printf("%.1f\n", media);
        i++;
    }

    return 0;
}
