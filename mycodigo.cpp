#include <stdio.h>
#include <stdlib.h>
int soma(int e, int f)
{
	int r;
	r= e+ f;
	printf("%d \n\n",r);
	return(0);
}
int media(float j, float k)
{
	float resultado;
	resultado = (j+k) / 2;
	printf("%1.f \n\n", resultado);
}
int imprima()
{
	printf("=========================================================\n\n");
	printf("             :)  meu codigo  (:  \n\n");
	printf("========================================================= \n\n");
}
int agradecer()
{
	printf("obrigado por usar meu codigooo (: \n\n");
}
int main()
{
	int a,b;
	imprima();
	printf("digite dois numeros para a media e soma: \n\n");
	scanf("%d %d",&a,&b);
	soma(a,b);
	media(a,b);
	agradecer();
	
	
}
