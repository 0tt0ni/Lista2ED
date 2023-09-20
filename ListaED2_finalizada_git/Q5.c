#include <stdio.h>
#include <stdlib.h>

//Filype ottoni campos rodrigues coelho
//UC22200168

void insertionSort(int MT[][2], int tamanho) {
	
	
    for (int i = 1; i < tamanho; i++) {
        int key0 = MT[i][0], key1 = MT[i][1];
        int j = i - 1;

        while (j >= 0 && MT[j][0] > key0) {
            MT[j + 1][0] = MT[j][0];
            MT[j + 1][1] = MT[j][1];
            j--;
        }

        MT[j + 1][0] = key0;
        MT[j + 1][1] = key1;
    }
}


int main() {
    int ne;

    	printf("Digite o numero de elementos na matriz: ");
scanf("%d", &ne);

    int MT[ne][2];

    	printf("Digite os elementos da matriz:\n");
    	
    	
    for (int i = 0; i < ne; i++) {
scanf("%d %d", &MT[i][0], &MT[i][1]);
    }
    

    insertionSort(MT, ne);


    	printf("Matriz ordenada:\n");
    	
    for (int i = 0; i < ne; i++) {
        printf("%d %d\n", MT[i][0], MT[i][1]);
    }

    return 0;
}

