//Bianca Bertoldo de Oliveira 11721ETE002

#include <stdio.h>

int conv_bin (int numero){
	
	int i, y;
	
	for(i=31; i > 0; i--){
		
		y = numero >> i;
		
		if(y & 1){
			
			printf("1");
		}
		
		else{
			
			printf("0");
		}
	}
}

int main(){
	
	int a, b, opcao, ans;
	
	printf("Calculadora de Bitwise\n\n");
	printf("1- NOT\n");
	printf("2- AND\n");
	printf("3- OR\n");
	printf("4- XOR\n");
	printf("5- Right Shift\n");
	printf("6- Left Shift\n\n");
	printf("7- Sair\n\n");
	printf("Entre com a operação desejada: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		
		case 1:
			printf("\n\nEntre com um numero: ");
			scanf("%d", &a);
			getchar();
			
			printf("\nNOT %d", a);
			printf("(");
			
			conv_bin(a, 32);
			printf("(");
			ans=~x;
			
			printf(" : %d", ans);
			printf("(");
			conv_bin(ans, 32);
			printf("(");
			break;
			
		case 2:
			printf("\n\nEntre com um numero: ");
			scanf("%d", &a);
			getchar();
			
			printf("\n\nEntre com outro numero: ");
			scanf("%d", &b);
			getchar();
			
			printf("\n\n%d", a);
			printf("(");
			
			conv_bin(a, 32);
			printf("(");
			printf(" AND %d", b);
			printf("(");
			
			conv_bin(b, 32);
			printf("(");
			ans = a&b;
			
			printf(" : %d", ans);
			printf("(");
			conv_bin(ans, 32);
			printf("(");
			break;
			
		case 3:
			printf("\n\nEntre com um numero: ");
			scanf("%d", &a);
			getchar();
			
			printf("Entre com outro numero: ");
			scanf("%d", &b);
			getchar();
			
			printf("\n\n%d", a);
			printf("(");
			
			conv_bin(a, 32);
			printf("(");
			printf(" OR %d", b);
			printf("(");
			
			conv_bin(b, 32);
			printf("(");
			ans=x|y;
			
			printf(" : %d", ans);
			printf("(");
			conv_bin(ans, 32);
			printf("(");
			break;
			
		case 4:
			printf("\n\nEntre com um numero: ");
			scanf("%d", &a);
			getchar();
			
			printf("Entre com outro numero: ");
			scanf("%d", &b);
			getchar();
			
			printf("\n\n%d", a);
			printf("(");
			
			conv_bin(a, 32);
			printf("(");
			printf(" OR %d", b);
			printf("(");
			
			conv_bin(b, 32);
			printf("(");
			ans=x^y;
			
			printf(" : %d", ans);
			printf("(");
			conv_bin(ans, 32);
			printf("(");
			break;
			
		case 5:
			printf("\n\nEntre com um numero: ");
			scanf("%d", &a);
			getchar();
			
			printf("Entre com outro numero: ");
			scanf("%d", &b);
			getchar();
			
			printf("\n\n%d", a);
			printf("(");
			
			conv_bin(a, 32);
			printf("(");
			printf(" OR %d", b);
			printf("(");
			
			conv_bin(b, 32);
			printf("(");
			ans=x>>y;
			
			printf(" : %d", ans);
			printf("(");
			conv_bin(ans, 32);
			printf("(");
			break;
			
		case 6:
			printf("\n\nEntre com um numero: ");
			scanf("%d", &a);
			getchar();
			
			printf("Entre com outro numero: ");
			scanf("%d", &b);
			getchar();
			
			printf("\n\n%d", a);
			printf("(");
			
			conv_bin(a, 32);
			printf("(");
			printf(" OR %d", b);
			printf("(");
			
			conv_bin(b, 32);
			printf("(");
			ans=x<<y;
			
			printf(" : %d", ans);
			printf("(");
			conv_bin(ans, 32);
			printf("(");
			break;
			
		case 7:
			return 0;
			break;
			
		default:
			if (opcao!=8){
				printf("Opcao nao valida.");
				break;
			}
	}
	
	return 0;
}
