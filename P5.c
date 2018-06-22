//Bianca Bertoldo de Oliveira 11721ETE002

#include<stdio.h>

int main()
{
	char str[256]={'\0'},*p,*msg=str;
	
	int opcao,i=0,*ps,k[64];
	do{
		printf("Bem Vindo!\n\n");
		printf("\n1- Criptografar");
		printf("\n2- Descriptografar");
		printf("\n3- Sair");
		printf("\n\nDigite a opcao desejada: ");
		scanf("%d",&opcao);
		
		switch(opcao){
		
		case 1:
			printf("\n\nEntre com uma frase: \n");
			scanf("%s",str);
			getchar();
			
			for(i=0;str[i];i++){
				
				ps=(int *)msg;
				
				if(ps[i]!=0)
				{
					printf("\nFrase criptografada: %d",ps[i]);
				}
				if(ps[i+1]!=0)
				{
					printf(", %d", ps[i+1]);
					return 0;
				}	
			}
					
		case 2:
			printf("\n\nEntre com uma frase criptografada, e depois entre com 0: \n");
			
			for(i=0;i<64;i++){
				
				scanf("%d",&k[i]);
				getchar();
				p=(char *)k;
				
				if(k[i]==0)
				{
					break;
				}
			}
			printf("\nFrase descriptografada: %s",p);
				
			return 0;
		}
	}
	
	while(opcao!=3);
	return 0;
}
