#include <stdio.h>

int main(){
	int contagem, contagem2;
	float a;
	contagem = 0;
	contagem2 = 0;
	do{
		printf("Valor: \n");
		scanf("%f", &a);
		if(a>=10 && a<=20){
			contagem2 = contagem2 + 1;
		}
		contagem = contagem + 1;
	}while(contagem<10);
	printf("Dentro do intervalo: %d", contagem2);
	printf("\n Fora: %d", 10-contagem2);
	return 0;
}
			