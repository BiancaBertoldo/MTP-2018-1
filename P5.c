//Bianca Bertoldo de Oliveira 11721ETE002

#include <stdio.h>

int main(){

	char str[300];
	int i, opcao;
	
	printf("MENU\n");
    printf("\n1- Codificar\n");
    printf("2- Descodificar\n");
    printf("3- Sair\n");
    printf("\nBem vindo! Digite a opcao desejada: ");
	scanf("%d", &opcao);
    getchar();
	
	if(opcao == 1){
		
		char input[300];
		{
			int a=0;
			while(a<300){
				
				input[a] = 0;
				a++;
			}
		}
		
		printf("\n\nDigite a frase: ");
		gets(input);
		
		int x = 0;
		
		while(input[x] != '\0'){
			
			if(x == 0){
				
				printf("\nFrase codificada: %d",*((int*)(&input[x])));
			}
			
			else{
				
				printf(", %d",*((int*)(&input[x])));
			}
			
			x+=4;
		}
		
		printf("\n");
	}
	
	else if(opcao == 2){
		
		int input[64];
		printf("\n\nDigite a frase: ");
		
		int x = 0;
		char virgula;
		
		while(1){
			
			scanf("%d%c",&input[x],&virgula);
			if(virgula != ','){
			
				break;
			}
			
			getchar();
			x++;
			
		}
		printf("\nFrase descodificada: %s",(char*)input);
	}
	
	else if(opcao ==3){
		
		return 0;
	}
	
	else{
		
		printf("Opcao nao valida.");
	}
	
	return 0;
	
}
