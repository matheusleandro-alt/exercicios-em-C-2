#include <stdio.h>

int main(){
	int a, b;
	float c, d;
	d=0;
	b=1;
	printf("Alunos: ");
	scanf("%d", &a);
	for(b=1; b<=a; b++){
		printf("\n Nota do aluno: ");
		scanf("%f", &c);
		d = d + c;
	}
	printf("%f", d/a);
}