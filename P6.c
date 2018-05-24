//Bianca Bertoldo de Oliveira 11721ETE002

#include <stdio.h>

int soma(int numero[], int n[]){
	
	int soma = 0, x;
	
	for(x=0; x<n; x++){
		
		soma = soma + numero[x];
	}
	
	return soma;
}

float m(int soma, float n){
	
	float media;
	media = soma/n;
	
	return media;
}

int main(){
	
	int x=0, numero[20], n, res;
	printf("Digite a quantidade de numeros entre 5 e 20 para calcular a soma: ");
	scanf("%d", &n);
	getchar();
	
	if(n >= 5 && n <= 20){
		for(x=0; x<n; x++){
			printf("\nNumero[%i]: ", x+1);
			scanf("%d", &numero[x]);
			getchar();
		}
	}
	else{
		printf("Quantidade de numeros nao valida.");
	}
	
	while(n>=5 && n<=20){
		res = soma(numero, n);
		printf("\nA media dos numeros e: %.1f", m(res,n));
		return 0;
	}
}
