#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void maior (int num1, int num2) {
	if(num1 > num2){
		printf("O primeiro numero e maior.");
	} else { 
		printf("O segundo numero e maior. ");
	}
}

void main () {
	int num1, num2;
	printf("Apresente o primeiro numero: \n");
	scanf("%d", &num1);
	printf("Apresente o segundo numero: \n");
	scanf("%d", &num2);
	maior(num1, num2);
}
