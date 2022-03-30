// GENERATED SOURCE FILE

#include "lib16api1_impl.h"
#include "lib16api1_private.h"
#include "lib17api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api14(int a, int b) {
    return a + b;
}

int Lib16Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api1" << std::endl;
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib16Api1Impl1Api1 lib16api1impl1api1;
        lib16api1impl1api1.doSomething();
        Lib16Api1Impl1Api2 lib16api1impl1api2;
        lib16api1impl1api2.doSomething();
        Lib16Api1Impl1Api3 lib16api1impl1api3;
        lib16api1impl1api3.doSomething();
        visited = 1;
    }
}

