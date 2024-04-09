#include "double_array.h"

void double_array(int *arr, size_t size) {
  size_t i;

  for (i = 0; i < size; i++) {
    arr[i] *= 2;
  }
}
