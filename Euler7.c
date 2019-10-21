//
// Created by Guy on 9/7/2019.
//

#include <stdio.h>
#include <stdbool.h>

/**
 * What is the 10 001st prime number?
 */

int Euler7() {
    int primeArray[10001] = {0};
    int primesFound = 0;
    int currentFreeIndex =0;
    int currNumber = 2;
    while(primesFound<10001) {
        int currIndex = 0;
        bool isPrime = true;
        while (currIndex< primesFound) {
            if (currNumber%primeArray[currIndex] == 0) {
                isPrime = false;
                break;
            }
            currIndex++;
        }
        if (isPrime) {
            primeArray[currentFreeIndex] = currNumber;
            primesFound++;
            currentFreeIndex++;
        }
        currNumber++;
    }
    printf("The %dth prime is %d", primesFound, primeArray[currentFreeIndex-1]);
    return 0;
}