//
// Created by Guy on 9/1/2019.
//
#include <stdio.h>
#include <stdlib.h>

/**
 * By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the
 * even-valued terms.
 */

int Euler2() {
    const int SUM_LIMIT = 4000000;
    int numSum = 0;
    int firstNumber = 1;
    int secondNumber = 2;
    int temp;
    while (secondNumber<SUM_LIMIT) {
        if (secondNumber % 2 == 0) {
            numSum += secondNumber;
        }
        temp = firstNumber;
        firstNumber = secondNumber;
        secondNumber += temp;
    }
    printf("The sum of the even numbers is %d", numSum);
    return 0;
}
