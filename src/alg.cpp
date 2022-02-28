// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double res = 1;
    for (int k  = 1; k <=n; k++) {
        res *= value;
    }
    return res;
}

uint64_t fact(uint16_t n) {
    uint64_t result=1;
    for(int i=1; i<=n; i++) {
        result *=i;
    }  
    return result;
}

double calcItem(double x, uint16_t n) {
    return pown(x, n)/fact(n);
}

double expn(double x, uint16_t count) {
    double res = 1;
    for (int n = 1; n <= count; n++) {
        res += pown(x, n)/fact(n);
    }
    return res;
}

double sinn(double x, uint16_t count) {
    double res = x;
    for (int n = 2; n <= count; n++) {
        res += pown(-1, n-1)*pown(x, 2*n-1)/fact(2*n-1);
    }
    return res;
}

double cosn(double x, uint16_t count) {
    double res = 1;
    for (int n = 2; n <= count; n++) {
        res += pown(-1, n-1)*pown(x, 2*n-2)/fact(2*n-2);
    }
    return res;
}
