#include "header.h"

int iterativeSumNOdd(int n) {
    // Declare and Initialize sum
    int sum = 0;

    // Iterative sum loop
    for(int i = 1; i < ((2*n) + 1); i += 2) {
        sum += i;
    }

    // Return sum of n odd numbers
    return sum;
}