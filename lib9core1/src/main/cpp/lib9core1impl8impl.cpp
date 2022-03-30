// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl8impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl8impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl8impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl8impl4(int a, int b) {
    return a + b;
}

int Lib9Core1Impl8Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl8Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl8Impl" << std::endl;
        Lib9Core1Impl8Core1 lib9core1impl8core1;
        lib9core1impl8core1.doSomething();
        Lib9Core1Impl8Core2 lib9core1impl8core2;
        lib9core1impl8core2.doSomething();
        Lib9Core1Impl9Api1 lib9core1impl9api1;
        lib9core1impl9api1.doSomething();
        Lib9Core1Impl9Api2 lib9core1impl9api2;
        lib9core1impl9api2.doSomething();
        Lib9Core1Impl9Api3 lib9core1impl9api3;
        lib9core1impl9api3.doSomething();
        visited = 1;
    }
}

