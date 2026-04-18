#include <stdio.h>

int main(){
	int a;
	float b, c;
	a = 0;
	b = 0;
	c = 0;
	do{
		printf("Número: \n");
		scanf("%f", &b);
		if(b<40){
			c = c + b;
		}
		a = a + 1;
	}while(a<10);
	printf("\n %f", c);
	return 0;
}