//
// Created by Guy on 9/6/2019.
//

#include <stdio.h>

/**
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */


int Euler5() {
    int smallestProduct = 1;
    int factorArray[20] = {0};
    for (int i = 0;i<20;i++) {
        factorArray[i] = i+1;
    }
    for (int i = 0;i<20;i++) {
        for (int j = 0;j<i;j++) {
            if(factorArray[i]%factorArray[j] == 0) {
                factorArray[i] = factorArray[i]/factorArray[j];
            }
        }
    }
    for (int i = 0;i<20;i++) {
        smallestProduct = smallestProduct * factorArray[i];
    }
    printf("The smallest factor is %d", smallestProduct);
    return 0;
}