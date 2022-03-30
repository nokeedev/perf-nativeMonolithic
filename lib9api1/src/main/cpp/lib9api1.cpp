// GENERATED SOURCE FILE

#include "lib9api1_impl.h"
#include "lib9api1_private.h"
#include "lib10api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api14(int a, int b) {
    return a + b;
}

int Lib9Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api1" << std::endl;
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib9Api1Impl1Api1 lib9api1impl1api1;
        lib9api1impl1api1.doSomething();
        Lib9Api1Impl1Api2 lib9api1impl1api2;
        lib9api1impl1api2.doSomething();
        Lib9Api1Impl1Api3 lib9api1impl1api3;
        lib9api1impl1api3.doSomething();
        visited = 1;
    }
}

