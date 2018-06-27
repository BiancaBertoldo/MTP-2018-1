//Bianca Bertoldo de Oliveira 11721ETE002

#include <stdio.h>

int main()
{
	int n = 0, i;
	float v[n], som=0, med;
	
	printf("Entre com a quantidade de numeros desejada, entre 5 e 20:\n");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("\nNumero %i: ", i+1);
		scanf ("%f", &v[i]);
	}  
	
	if(n >=5 && n <=20)
	{
		for(i=0; i<n; i++)
		{
			som = som + v[i];
		}
		
		med = som/n;
		printf("\nMedia: %.1f", med);
	
	}
	
	return 0;
}
