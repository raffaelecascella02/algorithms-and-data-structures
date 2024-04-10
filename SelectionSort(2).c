#include <stdio.h>

	/* Implementazione selection sort. 											*/
	/* L'idea è che seleziono gli elementi più grandi e li posiziono alla fine	*/
	/* della lista in modo iterativo fino ad ordinarla in modo decrescente.		*/

	/* Il selection sort è un algoritmo instabile ma "in place" */

int main (void) {
	
	int a[] = {41, 37, 10, 74, 98, 22, 83, 66}
	int n = sizeof(a);
	
	for (int i = n - 1; i >= 0; i--){			//scorro tutti gli elementi
		int max = i;
		for (int j = i - 1; j >= 0; j--){ 		//scorro parte degli elementi (i-1)
			if (a[j] > a[max]){					//verifico che non ci sia un elemento nel sottoinsieme che sia maggiore del massimo
				max = j;						//in caso negativo definisco che il massimo sia il nuovo elemento trovato nel sotto-vettore
			}
		}
		if (max!=i){							//SE l'elemento trovato non è nella stessa posizione dell'indice dell'ultimo elemento
			int temp = a[i];					//ALLORA attuo una procedura di scambio
			a[i] = a[max];
			a[max] = temp;
		}
	}
}