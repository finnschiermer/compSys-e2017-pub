#include <stdlib.h>

int main(int argc, char* argv[]) {
  switch (argc) {
    case 2:
    case 4:
      exit(EXIT_SUCCESS);
      break;
    default:
      exit(EXIT_FAILURE);
      break;
  }
}