//Bianca Bertoldo de Oliveira 11721ETE002

#include <stdio.h>

void preencher(char bits[])
{
	printf("\nIndique o valor: ");
	scanf("%s", bits);
}
int conv_oct(int num, int b)
{
    int aux=0, i=1;
    while (num!=0)
    {
        aux+=(num%b)*i;
        num/=b;
        i*=10;
    }
    return aux;
}
void conv_hex(int num, int b, int menu)
{
	int i=0, j=0, k=0, aux=0, n=0;
	char hex[256], temp[256];
	k=num;
	while (k!=0)
	{
		aux=k%b;
		if (aux<10)
			temp[j++]=48+aux;
		else
		    temp[j++]=55+aux;
		k=k/b;
		n++;
	}
	for (i=n-1, j=0; i+1!=0; --i, ++j)
		hex[j]=temp[i];
	hex[n]='\0';
	printf("\nResultado: %s", hex);
}
int conv_dec(char bits[], int b) 
{
	int i=0, aux=0;
	for(i=0; bits[i]!='\0'; i++)
	{
	    if (bits[i]<=57 && bits[i]>=48)
	    {
            aux=aux*b+(bits[i] - '0');
	    }
        else if (bits[i]>=65)
        {
            {
        	    if (bits[i]>=97)
    	        {
    	        	bits[i]-=32;
    	        	aux=aux*b+(bits[i] - '7');
				}
    	        else
        	        aux=aux*b+(bits[i] - '7');
		    }
	    }
    }
    return aux;
}
int conv_bin(int num, int b)
{
	char bin[256];
	int i=0, j=0, k=1, n=0, aux=0, aux2;
	for (n=0; num>=(1<<n); n++);
	for (i=1; i<=n; i++)
	{
		if (num%2==0)
		{
			bin[n-i]='0';
			num=num/2;
		}
		else
		{
			bin[n-i]='1';
			num=(num-1)/2;
		}
	}
	for (i=0; bin[i]!='\0'; i++)
	{
		k=1;
		for(j=1; j<(n-i); j++)
		    k=k*b;
		aux+=(bin[i] - '0')*(k);
	}
    return aux;
}

int main ()
{
	
	int opcao = 0, n=0, b=0, cv=0, teste=0;
	char bits[256];
	
	while (opcao != 9){

		printf("MENU");
		printf("\n1- Binario para Decimal");
		printf("\n2- Binario para Hexadecimal");
		printf("\n3- Hexadecimal para Decimal");
		printf("\n4- Hexadecimal para Binario");
		printf("\n5- Decimal para Hexadecimal");
		printf("\n6- Decimal para Binario");
		printf("\n7- Octal para Decimal");
		printf("\n8- Decimal para Octal");
		printf("\n9- Sair");
		printf("\n\nDigite a opcao de conversao desejada: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				b=2;
				preencher(bits);
                cv=conv_dec(bits, b);
				printf("\nResultado: %i", cv);
				return 0;
			case 2:
				b=2;
			    preencher(bits);
			    n=conv_dec(bits, b);
			    b=16;
                conv_hex(n, b, opcao);
				return 0;
			case 3:
				b=16;
				preencher(bits);
                cv=conv_dec(bits, b);
				printf("\nResultado: %i", cv);
				return 0;
			case 4:
				b=16;
				preencher(bits);
				n=conv_dec(bits, b);
				b=10;
				cv=conv_bin(n, b);
				printf("\nResultado: %i", cv);
				n=0;
				return 0;
			case 5:
				b=10;
				printf("\nPreencha com o valor a ser convertido: ");
	            scanf("%i", &n);
                cv=conv_bin(n, b);
				printf("\nResultado: %i", cv);
				return 0;
			case 6:
				b=16;
			    printf("\nPreencha com o valor a ser convertido: ");
	            scanf("%i", &n);
                conv_hex(n, b, opcao);
				return 0;
			case 7:
				b=8;
				preencher(bits);
                cv=conv_dec(bits, b);
				printf("\nResultado: %i", cv);
				return 0;
			case 8:
				b=8;
			    printf("\nPreencha com o valor a ser convertido: ");
            	scanf("%i", &n);
			    cv=conv_oct(n, b);
			    printf("\nResultado: %i", cv);
				return 0;
			case 9:
				return 0;		
		}
	}
	
	return 0;
	
}
