#include <stdio.h>

int main(){
	float a, b;
	b = 0;
	printf("Valor: ");
	scanf("%f", &a);
	while(b==0){
		printf("\n Valor diferente de zero: ");
		scanf("%f", &b);
		if(b==0){
			printf("\n Valor inválido");
		}
	}
	printf("\n A divisão resulta em: %f", a/b);
	return 0;
}