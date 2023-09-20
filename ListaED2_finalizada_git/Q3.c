#include <stdio.h>
#include <stdlib.h>

void insertionSort(int TA[], int e) {
	
//Filype ottoni campos rodrigues coelho
//UC22200168
	
    for (int i = 1; i < e; i++) {
        int k = TA[i];
        int z = i - 1;

        while (z >= 0 && TA[z] < k) {
            TA[z + 1] = TA[z];
            z--;
        }

        TA[z + 1] = k;
    }
}



int main() {
    int e;

    	printf("Digite o tamanho da matriz: ");
scanf("%d", &e);

    int TA[e];


    	printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < e; i++) {
scanf("%d", &TA[i]);
    }


    insertionSort(TA, e);


    printf("Matriz ordenada em ordem decrescente:\n");
    for (int i = 0; i < e; i++) {
        printf("%d ", TA[i]);
    }


    printf("\n");

    return 0;
}

