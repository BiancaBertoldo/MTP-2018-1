#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 30

void colocar(char matriz[][MAX]){
	
	int i=0, j=0;
	for (i=0; i<MAX; i++){
		for (j=0; j<MAX; j++){
			matriz[i][j]='.';
		}
	}
}

void gerarmatriz(char matriz[][MAX])
{
	int i, j;
	
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			if(matriz[i][j]=='.'){
				matriz[i][j] = rand()%26 + 'A';	
			}
			
		}
	}
}

void posicao(char matriz[][MAX], char palavra[10])
{
	int i, j, direcao, linha, coluna, flag = 0, t, x;
	direcao = rand()%9;
	t=strlen(palavra);
	
	while (flag < t){
		
		if(direcao == 1){ // Leste
			
			linha = rand()%31;
			coluna = rand()%21;
			i=linha;
			j=coluna;
			flag = 0;
			
			for(x=0; palavra[x] != '\0'; x++ ){
				
				if(matriz[i][j+x] == '.'){
					
					flag++;
				}
				
				else{
					
					break;
				}
				
				if(flag == t){
					
					for(x=0; palavra[x] != '\0'; x++ ){
						
						matriz[i][j+x]=palavra[x];
					}
				}
			}
		}
		
		
				
		if(direcao == 2){ // Nordeste
			
			linha = rand()%21+10;
			coluna = rand()%21;
			i=linha;
			j=coluna;
			flag = 0;
			
			for(x=0; palavra[x] != '\0'; x++ ){
				
				if(matriz[i-x][j+x] == '.'){
					
					flag++;
				}
				
				else{
					
					break;
				}
				
				if(flag == t){
					
					for(x=0; palavra[x] != '\0'; x++ ){
						
						matriz[i-x][j+x]=palavra[x];
					}
				}
			}
		}
		
		
		
		if(direcao == 3){ // Norte
			
			linha = rand()%21+10;
			coluna = rand()%31;
			i=linha;
			j=coluna;
			flag = 0;
			
			for(x=0; palavra[x] != '\0'; x++ ){
				
				if(matriz[i-x][j] == '.'){
					
					flag++;
				}
				
				else{
					
					break;
				}
				
				if(flag == t){
					
					for(x=0; palavra[x] != '\0'; x++ ){
						
						matriz[i-x][j]=palavra[x];
					}
				}
			}
		}
		
		
		
		if(direcao == 4){ // Noroeste
			
			linha = rand()%21+10;
			coluna = rand()%21+10;
			i=linha;
			j=coluna;
			flag = 0;
			
			for(x=0; palavra[x] != '\0'; x++ ){
				
				if(matriz[i-x][j-x] == '.'){
					
					flag++;
				}
				
				else{
					
					break;
				}
				
				if(flag == t){
					
					for(x=0; palavra[x] != '\0'; x++ ){
						
						matriz[i-x][j-x]=palavra[x];
					}
				}
			}
		}
		
		
		
		if(direcao == 5){ // Oeste
			
			linha = rand()%31;
			coluna = rand()%21+10;
			i=linha;
			j=coluna;
			flag = 0;
			
			for(x=0; palavra[x] != '\0'; x++ ){
				
				if(matriz[i][j-x] == '.'){
					
					flag++;
				}
				
				else{
					
					break;
				}
				
				if(flag == t){
					
					for(x=0; palavra[x] != '\0'; x++ ){
						
						matriz[i][j-x]=palavra[x];
					}
				}
			}
		}
		
		
		
		if(direcao == 6){ // Sudoeste
			
			linha = rand()%21;
			coluna = rand()%21+10;
			i=linha;
			j=coluna;
			flag = 0;
			
			for(x=0; palavra[x] != '\0'; x++ ){
				
				if(matriz[i+x][j-x] == '.'){
					
					flag++;
				}
				
				else{
					
					break;
				}
				
				if(flag == t){
					
					for(x=0; palavra[x] != '\0'; x++ ){
						
						matriz[i+x][j-x]=palavra[x];
					}
				}
			}
		}
		
		
		
		if(direcao == 7){ // Sul
			
			linha = rand()%21;
			coluna = rand()%31;
			i=linha;
			j=coluna;
			flag = 0;
			
			for(x=0; palavra[x] != '\0'; x++ ){
				
				if(matriz[i+x][j] == '.'){
					
					flag++;
				}
				
				else{
					
					break;
				}
				
				if(flag == t){
					
					for(x=0; palavra[x] != '\0'; x++ ){
						
						matriz[i+x][j]=palavra[x];
					}
				}
			}
		}
		
		
		
		if(direcao == 8){ // Sudeste
			
			linha = rand()%21;
			coluna = rand()%21;
			i=linha;
			j=coluna;
			flag = 0;
			
			for(x=0; palavra[x] != '\0'; x++ ){
				
				if(matriz[i+x][j+x] == '.'){
					
					flag++;
				}
				
				else{
					
					break;
				}
				
				if(flag == t){
					
					for(x=0; palavra[x] != '\0'; x++ ){
						
						matriz[i+x][j+x]=palavra[x];
					}
				}
			}
		}
	}
}

// void maisculo(char palavra[10]){
	
	// int x=0;
	// for (x=0; x<MAX; x++){
		// palavra[x]=toupper(palavra[x]);
	// }
// }

void imprimirmatriz(char matriz[][MAX])
{
	int i, j;
	
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			printf("%c ", matriz[i][j]);
		}
		printf("\n");
	}
}

int main ()
{
	int i, j, t1, t2, t3, t4, t5;
    char matriz[MAX][MAX], palavra1[10], palavra2[10], palavra3[10], palavra4[10], palavra5[10];
	
	srand(time(0));
	
	colocar(matriz);
	
	printf("BEM VINDO AO CACA-PALAVRAS!");
	printf("\n\nDigite 5 palavras com no maximo 10 letras:\n");
	gets(palavra1);
	fflush(stdin);
	gets(palavra2);
	fflush(stdin);
	gets(palavra3);
	fflush(stdin);
	gets(palavra4);
	fflush(stdin);
	gets(palavra5);
	fflush(stdin);
	
	t1=strlen(palavra1);
	t2=strlen(palavra2);
	t3=strlen(palavra3);
	t4=strlen(palavra4);
	t5=strlen(palavra5);
	
	posicao(matriz, palavra1);
	posicao(matriz, palavra2);
	posicao(matriz, palavra3);
	posicao(matriz, palavra4);
	posicao(matriz, palavra5);
	
	
	for (i=0; i < MAX; i++){
		for (j=0; j < MAX; j++){
			matriz[i][j];
		}
	}
	
	gerarmatriz(matriz);

	printf("\n\nPALAVRAS: %s, %s, %s, %s, %s\n\n", palavra1, palavra2, palavra3, palavra4, palavra5);
	
	imprimirmatriz(matriz);
	
	return 0;
}
