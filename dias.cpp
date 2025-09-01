#include <stdio.h>
int main(){
	int anos,meses,dias,mesesr,diasr,entrada,soma;
	scanf("%d",&entrada);
	soma = entrada / 365;
	diasr = entrada % 365;
	meses = diasr / 30;
	dias= diasr %30;
	printf("%d ano(s)\n",soma);
	printf("%d mes(es)\n",meses);		
	printf("%d dia(s)\n",dias);	

	
	return 0;
}
