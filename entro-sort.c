#include "entro-sort.h"

void entro_sort_ascending(unsigned long count, int *input) {
  int copied_input;
  unsigned long step_count;
  unsigned long i;
  unsigned long j;
  char is_sorted;

  if (count > 1) {
    i = 0;
    j = (count >> 12) + (count >> 7) + 1;
    is_sorted = 0;

    while (is_sorted == 0) {
      step_count = (count >> 15) + (count >> 14) + 1;
      is_sorted = 1;

      while (i < j) {
        while (j != count) {
          if (input[i] > input[j]) {
            copied_input = input[i];
            input[i] = input[j];
            input[j] = copied_input;
          }

          i++;
          j++;
        }

        if (((count - i) >> 12) != 0) {
          step_count++;
        }

        i += step_count;

        if (i >= j) {
          i = j - 1;
        }

        while (i != 0) {
          i--;
          j--;

          if (input[i] > input[j]) {
            copied_input = input[i];
            input[i] = input[j];
            input[j] = copied_input;
            is_sorted = 0;
          }
        }

        j--;
      }

      if (is_sorted == 0) {
        i = 0;
        j = (count >> 15) + (count >> 14) + 8;
      }
    }
  }
}

void entro_sort_descending(unsigned long count, int *input) {
  int copied_input;
  unsigned long step_count;
  unsigned long i;
  unsigned long j;
  char is_sorted;

  if (count > 1) {
    i = 0;
    j = (count >> 12) + (count >> 7) + 1;
    is_sorted = 0;

    while (is_sorted == 0) {
      step_count = (count >> 15) + (count >> 14) + 1;
      is_sorted = 1;

      while (i < j) {
        while (j != count) {
          if (input[i] < input[j]) {
            copied_input = input[i];
            input[i] = input[j];
            input[j] = copied_input;
          }

          i++;
          j++;
        }

        if (((count - i) >> 12) != 0) {
          step_count++;
        }

        i += step_count;

        if (i >= j) {
          i = j - 1;
        }

        while (i != 0) {
          i--;
          j--;

          if (input[i] < input[j]) {
            copied_input = input[i];
            input[i] = input[j];
            input[j] = copied_input;
            is_sorted = 0;
          }
        }

        j--;
      }

      if (is_sorted == 0) {
        i = 0;
        j = (count >> 15) + (count >> 14) + 8;
      }
    }
  }
}
