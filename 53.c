#include <stdio.h>

int main() {
    int n, i;
    n=0;
    
    while(n<=0){
    	printf("N: ");
    	scanf("%d", &n);
    }

    for (i = 1; i <= n; i++) {
        printf("%d \n", i);
    }

    return 0;
}