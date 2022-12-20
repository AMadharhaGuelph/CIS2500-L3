#include "header.h"

int recursiveSumNOdd(int n) {
    // Recursive sum loop
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    return ((2 * n) - 1) + recursiveSumNOdd(n-1);
}