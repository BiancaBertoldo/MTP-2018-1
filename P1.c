//Bianca Bertoldo de Oliveira 11721ETE002

#include <stdio.h>

int main(){
	
	int estado = 0, i = 0;
    char num[200];
    
    printf("Digite o numero binario: \n");
    scanf("%s", num);
    
    while(num[i] != '\0'){
	
		if (estado == 0 && num[i] == '0'){
    		estado = 0;
    		i++;
		}
    	
    	if (estado == 0 && num[i] == '1'){
    		estado = 1;
    		i++;
    	}
    	
    	if (estado == 1 && num[i] == '0'){
    		estado = 2;
    		i++;
    	}
    	
    	if (estado == 1 && num[i] == '1'){
    		estado = 0;
    		i++;
    	}
    	
    	if (estado == 2 && num[i] == '0'){
    		estado = 1;
    		i++;
    	}
    	
    	if (estado == 2 && num[i] == '1'){
    		estado = 2;
    		i++;
    	}
	
	}
	
	if (estado == 0){
		printf("\nO numero binario eh: %s", num);
		printf("\nO numero eh multiplo de 3.");
	}
	
	else{
		printf("\nO numero binario eh: %s", num);
		printf("\nO numero nao eh multiplo de 3.");
	}
	
	return 0;
	
}
