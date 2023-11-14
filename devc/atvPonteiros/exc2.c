#include<stdio.h>
#include<stdlib.h>

int main(){
	int x,y;
	
	int *p = &x;
	int *c = &y;
	
	if(x < y){
		printf("O endereco X: %d e maior", &x);
	} else {
		printf("O endereco Y: %d e maior", &y);
	}
	
	return 0;
}