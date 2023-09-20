#include <stdio.h>
#include <stdlib.h>

//Filype ottoni campos rodrigues coelho
//UC22200168
typedef struct {
    int linha;
    int coluna;
} Posicao;


Posicao buscaSequencial(int** MT, int linhas, int colunas, int num) {
    
	
	Posicao pos;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (MT[i][j] == num) {
                pos.linha = i;
                pos.coluna = j;
                return pos;
            }
        }
    }
    
    pos.linha = -1;
    pos.coluna = -1;
    return pos;
  
  
    
}

int main() {
    int linhas, colunas, num;


    		printf("Digite o número de linhas da matriz: ");
scanf("%d", &linhas);
    		printf("Digite o número de colunas da matriz: ");
scanf("%d", &colunas);

    
    int** MT = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        MT[i] = (int*)malloc(colunas * sizeof(int));
    }

    
    		printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
scanf("%d", &MT[i][j]);
        }
    }

    		printf("Digite o valor a ser procurado: ");
scanf("%d", &num);


    Posicao pos = buscaSequencial(MT, linhas, colunas, num);
    if (pos.linha == -1 && pos.coluna == -1) {
        	printf("Valor não encontrado.\n");
    } else {
        	printf("Valor encontrado na linha %d, coluna %d.\n", pos.linha+1, pos.coluna+1);
    }


    
    for (int i = 0; i < linhas; i++) {
        free(MT[i]);
    }
    free(MT);


    return 0;
}

