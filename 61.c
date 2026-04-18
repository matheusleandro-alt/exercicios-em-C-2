#include <stdio.h>

int main(){
	int contador;
	float a, b;
	b = 0;
	contador = 0;
	do{
		printf("Valor: \n");
		scanf("%f", &a);
		b = b + a;
		contador = contador + 1;
	}while(contador<10);
	printf("\n Média: %f", b/10);
	return 0;
}