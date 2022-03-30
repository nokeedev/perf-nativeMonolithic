// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl3api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl3api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl3api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl3api24(int a, int b) {
    return a + b;
}

int Lib12Core1Impl3Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl3Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl3Api2" << std::endl;
        Lib12Core1Impl3Impl lib12core1impl3impl;
        lib12core1impl3impl.doSomething();
        Lib12Core1Impl4Api1 lib12core1impl4api1;
        lib12core1impl4api1.doSomething();
        Lib12Core1Impl4Api2 lib12core1impl4api2;
        lib12core1impl4api2.doSomething();
        Lib12Core1Impl4Api3 lib12core1impl4api3;
        lib12core1impl4api3.doSomething();
        visited = 1;
    }
}

