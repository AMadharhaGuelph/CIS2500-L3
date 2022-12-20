#include "header.h"

int iterativeFibonacci(int n) {
    // Declare and/or Intialize variables
    int prev = 0, prev2 = 0, curr = 1;

    if(n == 0) {
        return 0;
    }

    // Iterative Fibonacci loop
    for(int i = 1; i < n; i++) {
        prev2 = prev;
        prev = curr;
        curr = prev2 + prev;
    }

    // Return nth fibonacci number
    return curr;
}