#include <stdio.h>

int main(){
	float a, b;
	float c, d;
	c=0;
	d = 0;
	printf("Mercadorias: ");
	scanf("%f", &a);
	for(c=0; c<a; c++){
		printf("\n Valor: ");
		scanf("%f", &b);
		d = d + b;
	}
	printf("\n Valor total: %f", d);
	printf("\n Média: %f", d/a);
	return 0;
}