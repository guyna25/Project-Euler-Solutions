//
// Created by Guy on 9/6/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * @param bound
 * @return the sum of squares of natrual numbers bound by given bound
 */

long long int computeSumofNatrualSquare(int bound) {
    return (bound * (bound+1) * (2*bound + 1))/6;
}

/**
 * @param bound
 * @return the square of sum of  natrual numbers bound by given bound
 */

long long int computeSquareofNatrualSum(int bound) {
    return pow((bound * (1+bound) / 2), 2);
}

int Euler6() {
    long long int squareOfSum = computeSquareofNatrualSum(100);
    long long int sumOfSquare = computeSumofNatrualSquare(100);
    printf("The difference is %d", squareOfSum - sumOfSquare);
    return 0;
}