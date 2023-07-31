#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
	int x;
	printf("Insira um valor? ");
	scanf("%i",&x);
	if(x%2 == 0){
		printf("%i e par",x);
	}
	else{
		printf("%i e impar",x);
	}
}