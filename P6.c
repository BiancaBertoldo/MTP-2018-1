//Bianca Bertoldo de Oliveira 11721ETE002

#include<stdio.h>

int soma(int *pt, int *pz) 
{	
	return (*pz) + ((pz == pt) ? 0 : soma(pt, pz-1));
}

int main()

{
	int tam;
	
	printf("Entre com a quantidade de numeros desejada, entre 5 e 20:\n");
	scanf("%i", &tam);	
	getchar();
	
	if(tam >=5 && tam <=20){
		int i, val[tam];
		
		printf("Entre com os valores:\n");
		
		for(i=0; i<tam; i++){
			scanf("%i", &val[i]);	
			getchar();
		}
		
		int *first = val,*last = val+tam-1;
		printf("\nMedia = %1.f\n", (float) soma(first, last)/tam);
		
		return 0;
	}
	
	else{
		printf("Quantidade nao valida!");
	}
}
