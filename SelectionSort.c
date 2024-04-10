#include <stdio.h>
#include <stdlib.h>

void stampa_array(int x[]) {
  int len = sizeof(x);
  puts("Elementi dell'array separati da spazio:");
  for (int i = 0; i < len; i++) {
    printf("%d ", x[i]);
  }
}

int *crea_array(int len) {
  int *x = malloc(sizeof(int) * len);
  for (int i = 0; i < len; i++) {
    x[i] = i;
  }
  return x;
}

int *acquisisci_array(int len) {
  int *x = malloc(sizeof(int) * len);
  for (int i = 0; i < len; i++) {
    printf("Inserisci l'elemento %d: ", i);
    scanf("%d", &x[i]);
  }
  return x;
}

int *selection_sort(int x[]) {
  int len = sizeof(x);
  int i, j, min, temp;

  printf("\nOrdinamento dell'array con selection sort:\n");

  for (i = 0; i < len - 1; i++) {
    min = i;
    for (j = i + 1; j < len; j++) {
      if (x[j] < x[min]) {
        min = j;
      }
    }
    temp = x[min];
    x[min] = x[i];
    x[i] = temp;
  }
  return x;
}

int main(void) {
  int len = 8;
  int *x = crea_array(len);
  x = acquisisci_array(len);
  stampa_array(x);
  selection_sort(x);
  stampa_array(x);
}
