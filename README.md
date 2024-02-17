# ScannerSort
![ScannerSort Logo](https://repository-images.githubusercontent.com/743312216/4b28663b-0e8b-4f10-a473-a86765dfa211)
## Description
ScannerSort is an in-place, linearithmic, unstable sorting algorithm.

Read [this article](https://medium.com/@wilparsons/scannersort-is-a-new-sorting-algorithm-upgrade-to-bubble-sort-and-cocktail-shaker-sort-78662863c976) for an in-depth explanation.

## Usage
``` c
#include <stdio.h>
#include "scannersort.h"

int main(void) {
  int input_1[10] = {24, -32, 22, -126, 105, 9, 65, 145, -88, 48};
  int input_2[10] = {24, -32, 22, -126, 105, 9, 65, 145, -88, 48};
  unsigned char i = 0;

  scannersort_ascending(10, input_1);

  while (i != 10) {
    printf("%d\n", input_1[i]);
    i++;
  }

  printf("\n");
  scannersort_descending(10, input_2);
  i = 0;

  while (i != 10) {
    printf("%d\n", input_2[i]);
    i++;
  }

  return 0;
}
```

## Reference
#### `scannersort_[order]()`
This is the sorting function that accepts the 2 following arguments.

`[order]` is replaced with either `ascending` or `descending`.

`count` is the count of elements in the `input` array.

`input` is the array to sort.

The default input data type in C is `int`. Any data type can be sorted by replacing all occurences of `int` with the appropriate data type.

Other programming languages use generic types.

The return value data type is `void`.

## Support
ScannerSort was designed and developed by [Wil Parsons](https://wilparsons.com/).

I'm available for freelance work to extend, modifify or implement ScannerSort and other algorithms.
