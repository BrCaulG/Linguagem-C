#include<stdio.h>
int main(){
	int h1,m1,h2,m2,totali,totalf,diferenca,duram,dura;
	scanf("%d %d %d %d",&h1,&m1,&h2, &m2);
	totali=h1*60+m1;
	totalf= h2*60+m2;
	if(totalf>totali){
		diferenca=totalf-totali;
	}else{
		diferenca = (24 *60 - totali)+totalf;
		
	}dura = diferenca / 60;
	duram = diferenca%60;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dura,duram);
	return 0;
	 
	

}
