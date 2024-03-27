# ScannerSort
![ScannerSort Logo](https://repository-images.githubusercontent.com/743312216/4e4a3e89-5538-42f8-9380-6cd8b11e5302)

## Description
ScannerSort is an in-place, unstable sorting algorithm.

Read [this article](https://medium.com/@williamstaffordparsons/scannersort-is-a-new-sorting-algorithm-upgrade-to-bubble-sort-and-cocktail-shaker-sort-78662863c976) for an in-depth explanation.

## License
ScannerSort is subject to the software licensing terms from the [LICENSE file](https://github.com/williamstaffordparsons/scannersort/blob/master/LICENSE).

## Reference
#### `scannersort_[order]()`
This is the sorting function that accepts the 2 following arguments.

`[order]` is replaced with either `ascending` or `descending`.

`count` is the count of elements in the `input` array.

`input` is the array to sort.

The default input data type is `int`. Any data type can be sorted by replacing all occurences of `int` with the appropriate data type.

The return value data type is `void`.

## Usage
``` c
#include "scannersort.h"

int main(void) {
  int input_1[10] = {24, -32, 22, -126, 105, 9, 65, 145, -88, 48};
  int input_2[10] = {24, -32, 22, -126, 105, 9, 65, 145, -88, 48};

  scannersort_ascending(10, input_1);
  scannersort_descending(10, input_2);
  return 0;
}
```
