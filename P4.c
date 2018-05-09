//Bianca Bertoldo de Oliveira 11721ETE002

#include <stdio.h>

int main (){
	
	int i=0, cum=0;
	char num[300];
	
	printf("Entre com a string: \n\n");
	fgets(num,300,stdin);
	
	while(num[i]){
		
		if(num[i]>=48 && num[i]<=57){
			
			num[i]=num[i]-'0';
			cum = cum*10+num[i];
		}
		
		i++;
	}
	
	printf("Nova string: %d", cum);
	
	getch();
	return 0;
}
