#include "header.h"

int main(int argc, char *argv[]) {
    // Declare and/or Initialize variables
    int n, val;
    double timeElapsed = 0.0;
    clock_t begin, end;

    // Output n input
    printf("Input Value: %d\n", atoi(argv[1]));
    n = atoi(argv[1]);

    // Check for negative input
    if(n < 0) {
        printf("Invalid input. Exiting\n");
        exit(0);
    }

    printf("***************************\n");

    // Output odd number that are being added
    printf("Sum of");
    for(int i = 1; i < ((2*n) + 1); i += 2) {
        if(i == (2*n) - 1) {
            printf(" %d ", i);
        }
        else {
            printf(" %d +", i);
        }
    }
    printf("\n");

    // Output iterative sum and time
    begin = clock();
    val = iterativeSumNOdd(n);
    end = clock();
    timeElapsed = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Using iteration = %d\n", val);
    printf("Time elapsed for iterative sum is %lf second\n", timeElapsed);

    // Output recursive sum and time
    begin = clock();
    val = recursiveSumNOdd(n);
    end = clock();
    timeElapsed = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Using recursion = %d\n", val);
    printf("Time elapsed for recursive sum is %lf second\n", timeElapsed);

    printf("***************************\n");

    // Output iterative fibonacci and time
    begin = clock();
    val = iterativeFibonacci(n);
    end = clock();
    timeElapsed = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Iteratively, Fibonacci (%d) = %d\n", n, val);
    printf("Time elapsed for iterative Fibonacci is %lf second\n", timeElapsed);

    // Output recursive fibonacci and time
    begin = clock();
    val = recursiveFibonacci(n);
    end = clock();
    timeElapsed = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Recursively, Fibonacci (%d) = %d\n", n, val);
    printf("Time elapsed for recursive Fibonacci is %lf second\n", timeElapsed);

    printf("***************************\n");

    return 0;
}