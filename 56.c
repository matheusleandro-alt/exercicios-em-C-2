#include <stdio.h>

int main(){
	int a, b;
	a = 0;
	b = 1;
	while(a<1 || a>10){
		printf("Valor: \n");
		scanf("%d", &a);
	}
	for(b=1; b<=10; b++){
		printf("%d \n", a*b);
	}
	return 0;
}