#include <stdio.h>
#include <stdlib.h>

//Filype ottoni campos rodrigues coelho
//UC22200168

void bubbleSort(int el[], int tm) {
	
	
    for (int i = 0; i < tm - 1; i++) {
    for (int j = 0; j < tm - i - 1; j++) {
    	
            if (el[j] > el[j + 1]) {
                int temp = el[j];
                el[j] = el[j + 1];
                el[j + 1] = temp;
}
        }
    }
}



int main() {
    int tm;
    	printf("Digite o tamanho da array: ");
scanf("%d", &tm);

    int el[tm];
    	printf("Digite os elementos da array:\n");
    for (int i = 0; i < tm; i++) {
scanf("%d", &el[i]);
    }


bubbleSort(el, tm);

   		printf("Array ordenada:\n");
    for (int i = 0; i < tm; i++) {
        printf("%d ", el[i]);
    }
    	printf("\n");

    return 0;
}
