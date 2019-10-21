#include <stdio.h>
#include <stdlib.h>

/**
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

int Euler1() {
    int numSum = 0;
    const int FIRST_FACTOR = 3;
    const int SECOND_FACTOR = 5;
    for (int i = 1;i<1000;i++) {
        if (i%FIRST_FACTOR == 0 || i%SECOND_FACTOR == 0) {
            numSum += i;
        }
    }
    printf("The sum of the multiplies is %d", numSum);
    return 0;
}