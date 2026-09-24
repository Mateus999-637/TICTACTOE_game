#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define JOGADOR 'x'
#define MAQUINA 'o'

int main(){

	srand(time(NULL));
	
	int tentativa[9];
	int tam_tab = 9;
	int pos[9];
	int cardinal = 0; //cardinal é o nome da forma do jogo da velha
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
	
	bool repetida = false;
	
	for (int r = 0; r < cardinal; r++){
		if(tentativa[r] == escolha){
			repetida = true;
			break;
		}
	}
		
	if (repetida) {
        printf("Posicao %d já tentada!", escolha);
        continue;
    }
    
    tentativa[cardinal] = escolha;
    cardinal++;

	//int coordenada_salva = escolha; //int numero_random = rand() % 10;		
	//int maquina = numero_random; //printf("\n%d\n", numero_random);
	
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
	
	//PARA CHECAR VITORIA, VERIFICAR SE TODAS AS POSICOES DO TABULEIRO SAO DIFERENTES DE UNDERLINE E VERIFICAR CONDIÇÃO DE VITORIA COM BASE NAS POSICOES FAVORAVEIS DE VITORIA (posicoes_win)


	/* RASCUNHO legal 
   		bool ganhou = false;
   
   		for int v, v<9, v++ 
   		if tabuleiro[i][j] != '_';
   		ganhou = true;
   
   		if ganhou // jogo termina
   
	*/  



	//if (posicao de vitoria predefinida do  tabuleiro for difertente de underline e se forem pela mesma pessoa)
	//for ()
  }
}