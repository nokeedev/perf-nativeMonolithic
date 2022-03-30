// GENERATED SOURCE FILE

#include "lib15api1_impl.h"
#include "lib15api1_private.h"
#include "lib16api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api14(int a, int b) {
    return a + b;
}

int Lib15Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api1" << std::endl;
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib15Api1Impl1Api1 lib15api1impl1api1;
        lib15api1impl1api1.doSomething();
        Lib15Api1Impl1Api2 lib15api1impl1api2;
        lib15api1impl1api2.doSomething();
        Lib15Api1Impl1Api3 lib15api1impl1api3;
        lib15api1impl1api3.doSomething();
        visited = 1;
    }
}

