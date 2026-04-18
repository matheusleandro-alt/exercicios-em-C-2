#include <stdio.h>

int main(){
	int contagem, contagem2;
	float a;
	contagem = 0;
	contagem2 = 0;
	do{
		printf("Insira o valor: \n");
		scanf("%f", &a);
		if(a<0){
			contagem = contagem + 1;
		}
		contagem2 = contagem2 + 1;
	}while(contagem2<10);
	printf("Número de valores negativos: %d \n",   contagem);
	return 0;
}
		