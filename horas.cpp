#include <stdio.h>
#include <stdlib.h>
int main()
{
	int hora1, min1, hora2, min2,r,conversao1,conversao2;
	scanf("%d %d %d %d",&hora1, &min1, &hora2, &min2);
	conversao1 = (hora1 * 60 + min1);
	conversao2 = (hora2 * 60 + min2);

	if(conversao2 > conversao1 ){
	 r = (conversao2 - conversao1);
		printf("%d",r);
    }
    else if(conversao1 > conversao2){
    	r =(conversao2 + 1440) - conversao1;
    	printf("%d",r );
    
	}
	printf( "\n\n");
	system("PAUSE");
	return(0);

	
}
