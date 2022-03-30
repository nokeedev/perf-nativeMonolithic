// GENERATED SOURCE FILE

#include "lib17api1_impl.h"
#include "lib17api1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api14(int a, int b) {
    return a + b;
}

int Lib17Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1" << std::endl;
        Lib17Api1Impl1Api1 lib17api1impl1api1;
        lib17api1impl1api1.doSomething();
        Lib17Api1Impl1Api2 lib17api1impl1api2;
        lib17api1impl1api2.doSomething();
        Lib17Api1Impl1Api3 lib17api1impl1api3;
        lib17api1impl1api3.doSomething();
        visited = 1;
    }
}

