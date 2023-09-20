#include <stdio.h>
#include <stdlib.h>

//Filype ottoni campos rodrigues coelho
//UC22200168

void quicksort(int MT[][2], int baixo, int cima) {
    if (baixo < cima) {
        int DY = MT[cima][0];
        int i = baixo - 1;

        for (int j = baixo; j <= cima - 1; j++) {
            if (MT[j][0] < DY) {
                i++;
                int temp0 = MT[i][0], temp1 = MT[i][1];
                MT[i][0] = MT[j][0], MT[i][1] = MT[j][1];
                MT[j][0] = temp0, MT[j][1] = temp1;
            }
        }

        int temp0 = MT[i + 1][0], temp1 = MT[i + 1][1];
        MT[i + 1][0] = MT[cima][0], MT[i + 1][1] = MT[cima][1];
        MT[cima][0] = temp0, MT[cima][1] = temp1;

        quicksort(MT, baixo, i);
        quicksort(MT, i + 2, cima);
    }
}

int main() {
    int n;

    	printf("Digite o numero de elementos na matriz: ");
scanf("%d", &n);

    int MT[n][2];

    	printf("Digite os elementos da matriz:\n");
  
  
    for (int i = 0; i < n; i++) {
scanf("%d %d", &MT[i][0], &MT[i][1]);
    }



    quicksort(MT, 0, n - 1);



    	printf("Matriz ordenada:\n");
    	
    	
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", MT[i][0], MT[i][1]);
    }

    return 0;
}

