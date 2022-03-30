// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl8impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl8impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl8impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl8impl4(int a, int b) {
    return a + b;
}

int Lib11Core1Impl8Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl8Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl8Impl" << std::endl;
        Lib11Core1Impl8Core1 lib11core1impl8core1;
        lib11core1impl8core1.doSomething();
        Lib11Core1Impl8Core2 lib11core1impl8core2;
        lib11core1impl8core2.doSomething();
        Lib11Core1Impl9Api1 lib11core1impl9api1;
        lib11core1impl9api1.doSomething();
        Lib11Core1Impl9Api2 lib11core1impl9api2;
        lib11core1impl9api2.doSomething();
        Lib11Core1Impl9Api3 lib11core1impl9api3;
        lib11core1impl9api3.doSomething();
        visited = 1;
    }
}

