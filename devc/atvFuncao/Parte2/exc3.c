#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void produto(float valorat, float valoran, float *percentual){
		*percentual = ((valorat - valoran)*100) / valoran;
}
	
	int main(){
		setlocale(LC_ALL, "Portuguese");
		float valorat, valoran, percentual;
		
		printf("Digite o valor antigo desse produto: \n");
		scanf("%f", &valoran);
		printf("Digite o valor atual do produto: \n");
		scanf("%f", &valorat);
		
		produto(valorat, valoran, &percentual);
		
		printf("O acréscimo percentual se deu em: %.2f%% \n", percentual);
		
		return 0;
}