#include <stdio.h>
#include "entro-sort.h"

int main(void) {
  int input_1[10] = {24, -32, 22, -126, 105, 9, 65, 145, -88, 48};
  int input_2[10] = {24, -32, 22, -126, 105, 9, 65, 145, -88, 48};
  unsigned char i = 0;

  entro_sort_ascending(10, input_1);

  while (i != 10) {
    printf("%d\n", input_1[i]);
    i++;
  }

  printf("\n");
  entro_sort_descending(10, input_2);
  i = 0;

  while (i != 10) {
    printf("%d\n", input_2[i]);
    i++;
  }

  return 0;
}
