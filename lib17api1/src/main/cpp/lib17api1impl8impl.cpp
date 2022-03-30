// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl8impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl8impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl8impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl8impl4(int a, int b) {
    return a + b;
}

int Lib17Api1Impl8Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl8Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl8Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl8Core1 lib17api1impl8core1;
        lib17api1impl8core1.doSomething();
        Lib17Api1Impl8Core2 lib17api1impl8core2;
        lib17api1impl8core2.doSomething();
        Lib17Api1Impl9Api1 lib17api1impl9api1;
        lib17api1impl9api1.doSomething();
        Lib17Api1Impl9Api2 lib17api1impl9api2;
        lib17api1impl9api2.doSomething();
        Lib17Api1Impl9Api3 lib17api1impl9api3;
        lib17api1impl9api3.doSomething();
        visited = 1;
    }
}

