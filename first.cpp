#include <stdio.h>
#include <clocale>

int main(int argc, char const *argv[]) {
  setlocale(LC_ALL, "rus");
  printf("Привет, мир!\n");
  return 0;
}
