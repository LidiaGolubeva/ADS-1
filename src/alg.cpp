// Copyright 2022 NNTU-CS
#include "alg.h"
#include <cmath>
#include <cstdint>


bool checkPrime(uint64_t value) {
    for (uint64_t i = 2; i <= sqrt(value); i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t curr = 2;
    uint64_t count = 0;
    while (true) {
        if (checkPrime(curr)) {
            count++;
        }
        if (count == n) {
            break;
        }
        curr++;
    }
    return curr;
}

uint64_t nextPrime(uint64_t value) {
    while (true) {
        value++;
        if (checkPrime(value)) {
            return value;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            sum += i;
        }
    }
    return sum;
}
