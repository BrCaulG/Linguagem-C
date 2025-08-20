#include <stdio.h>
#include <stdlib.h> 
#include <math.h>   

int main() {
    int a, b, c;
    int maior_ab;
    int maior_final;

   
    scanf("%d %d %d", &a, &b, &c);

    
    maior_ab = (a + b + abs(a - b)) / 2;

   
    maior_final = (maior_ab + c + abs(maior_ab - c)) / 2;

   
    printf("%d eh o maior\n", maior_final);

    return 0;
}
