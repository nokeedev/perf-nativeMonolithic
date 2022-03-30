// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl8impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl8impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl8impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl8impl4(int a, int b) {
    return a + b;
}

int Lib15Core1Impl8Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl8Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl8Impl" << std::endl;
        Lib15Core1Impl8Core1 lib15core1impl8core1;
        lib15core1impl8core1.doSomething();
        Lib15Core1Impl8Core2 lib15core1impl8core2;
        lib15core1impl8core2.doSomething();
        Lib15Core1Impl9Api1 lib15core1impl9api1;
        lib15core1impl9api1.doSomething();
        Lib15Core1Impl9Api2 lib15core1impl9api2;
        lib15core1impl9api2.doSomething();
        Lib15Core1Impl9Api3 lib15core1impl9api3;
        lib15core1impl9api3.doSomething();
        visited = 1;
    }
}

