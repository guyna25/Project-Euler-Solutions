//
// Created by Guy on 9/6/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool isNumberPalindrome(int checkedNumber) {
    char numberInStr[6];
    sprintf(numberInStr, "%d", checkedNumber);
    for (int i = 0;i< 3; i++){
        if (numberInStr[i] != numberInStr[5-i]) {
            return false;
        }
    }
    return true;
}

/**
 * This function receives a product and a factor and returns the corresponding facotr which fits the range if its in
 * the range
 * @param product
 * @param firstFactor
 * @return the number if it's in range and -1 otherwise
 */

bool hasCorrespondingFactor(int product) {
    int lowerBound = 99;
    int upperBound = 1000;
    int firstFactor = 999;
    while (firstFactor > lowerBound) {
        if (product%firstFactor == 0) {
            if (99<product/firstFactor && product/firstFactor<1000) {
                return true;
            }
        }
        firstFactor--;
    }
    return false;
}


/**
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

int Euler4() {
    int currentNumber = 1000000; //starting from irrelvenat number because loop first decreases it to range
    bool foundPalindrome = false;
    while (!foundPalindrome) {
        currentNumber--;
        if (isNumberPalindrome(currentNumber)) {
            foundPalindrome = hasCorrespondingFactor(currentNumber);
        }
    }
    printf("The largest palindrome is %d", currentNumber);
    return 0;
}