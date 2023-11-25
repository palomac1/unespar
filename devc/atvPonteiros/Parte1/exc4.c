#include<stdio.h>
#include<stdlib.h>

void troca(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a, b;
	
	printf("Digite um valor para a: ");
	scanf("%d", &a);
	printf("Digite um valor para b: ");
	scanf("%d", &b);
	
	troca(&a, &b);
	
	printf("O valor de a: %d\n", a);
	printf("O valor de b: %d", b);
	
	return 0;
}