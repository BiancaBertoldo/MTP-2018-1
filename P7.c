//Bianca Bertoldo de Oliveira 11721ETE002

#include <stdio.h>

int funcaoA(int m, int n){
	int x;
	
	if (m == 0){
		
		return n+1;
		
	}
	
	else if (m > 0 && n == 0){
		
		return funcaoA(m-1,1);
		
	}
	
	else if (m > 0 && n > 0){
		
		return funcaoA(m-1, funcaoA(m,n-1));
		
	}
}

int main(){
	
	int m, n;
	
	printf("BEM VINDO!");
	printf("\n\nDigite o valor de m: ");
	scanf("%d", &m);
	printf("\nDigite o valor de n: ");
	scanf("%d", &n);
	
	printf("\n\nResultado da funcao: %d", funcaoA(m,n));
	
	return 0;
}
