#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define JOGADOR 'x'
#define MAQUINA 'o'


//PARA CHECAR VITORIA, VERIFICAR SE TODAS AS POSICOES DO TABULEIRO SAO DIFERENTES DE UNDERLINE E VERIFICAR CONDIÇÃO DE VITORIA COM BASE NAS POSICOES FAVORAVEIS DE VITORIA (posicoes_win)


/* RASCUNHO legal 
   bool ganhou = true;
   
   for int v, v<3, v++ 
   if tabuleiro[i][j] == '_';
   ganhou = false;
   
   if ganhou // jogo termina
   
*/   

int main(){

	srand(time(NULL));
	
	
	int vitorias = 0;
	int derrotas = 0;

	int posicoes_win[8][3] = {
    	{0, 1, 2}, 
    	{3, 4, 5}, 
    	{6, 7, 8}, 
   	 	{0, 3, 6}, 
   	 	{1, 4, 7}, 
    	{2, 5, 8}, 
    	{0, 4, 8}, 
    	{2, 4, 6},
	};
  
	char tabuleiro[3][3];
    	for (int i=0; i<3; i++){
        	for (int j=0; j<3; j++){
            	tabuleiro[i][j] = '_';
            	printf(" %c", tabuleiro[i][j]);
        	}
    		printf("\n");
		}
		printf("\n");
		
		
    while (1){
    	
    int escolha;
	printf("\nEscolha uma posicaoo para jogar (utilize numeros 1 - 9): \n");
	scanf("%d", &escolha);
	
	//int coordenada_salva = escolha;
	int numero_random = rand() % 10;
	//int maquina = numero_random;
	
	printf("\n%d\n", numero_random);
	
	

	switch (escolha){
		
		case 1:
		tabuleiro[0][0] = JOGADOR;
		break;
		
		case 2:
		tabuleiro[0][1] = JOGADOR;
		break;
		
		case 3:
		tabuleiro[0][2] = JOGADOR;
		break;
		
		case 4:
		tabuleiro[1][0] = JOGADOR;
		break;
		
		case 5:
		tabuleiro[1][1] = JOGADOR;
		break;
		
		case 6:
		tabuleiro[1][2] = JOGADOR;
		break;
		
		case 7:
		tabuleiro[2][0] = JOGADOR;
		break;
		
		case 8:
		tabuleiro[2][1] = JOGADOR;
		break;
		
		case 9:
		tabuleiro[2][2] = JOGADOR;
		break;
		
		default:
		printf("Voce nao selecionou nenhum numero!");
		continue;
	}

	for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf(" %c", tabuleiro[i][j]);
        }
    	printf("\n");
	}
  }
}