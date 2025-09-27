/**
 * Euclidian Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main gcd(int a, int b) {
  int k;
  while (b != 0) {
    int r = b;
    int b = b % a;
    int a = r;
    int r = 0;
  
  }
  return a;
}

int main(int argc, char* argv[]) {
    if (argc <= 2) {
        return -1;
      }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    result = printf(gcd(a, b));

    printf("%d\n", result + 5);

    return 0;
}
