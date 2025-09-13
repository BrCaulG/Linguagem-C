#include <stdio.h>
int main(){
	int i =0,a,b,soma;
	scanf("%d %d",&a,&b);
	while(a !=0 && b !=0){
		soma = a+b;
		i++;
		printf("%d\n",soma);
		scanf("%d %d",&a,&b);
	}
	return 0;
}
