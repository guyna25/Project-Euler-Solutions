//
// Created by Guy on 9/1/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * This functions receives an integer and returns 1 if its prime and 0 otherwise
 */

int isPrime(int checkedNumber) {
    if (checkedNumber < 1) {
        return 0;
    }
    for (int i = 2;i<checkedNumber;i++) {
        if (checkedNumber%i == 0) {
            return 0;
        }
    }
    return 1;
}

/**
 * What is the largest prime factor of the number 600851475143 ?
 */

int Euler3() {
    long long usedNumber = 600851475143;
    int largestPrime = 2;
    while (usedNumber != 1) {
        if (usedNumber%largestPrime == 0) {
            usedNumber = usedNumber/largestPrime;
        } else {
            largestPrime++;
        }
    }
    printf("The largest prime factor is %d", largestPrime);
    return 0;
}