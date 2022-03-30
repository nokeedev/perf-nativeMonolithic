// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl9impl4(int a, int b) {
    return a + b;
}

int Lib5Core1Impl9Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl9Impl" << std::endl;
        Lib5Core1Impl9Core1 lib5core1impl9core1;
        lib5core1impl9core1.doSomething();
        Lib5Core1Impl9Core2 lib5core1impl9core2;
        lib5core1impl9core2.doSomething();
        Lib5Core1Impl10Api1 lib5core1impl10api1;
        lib5core1impl10api1.doSomething();
        Lib5Core1Impl10Api2 lib5core1impl10api2;
        lib5core1impl10api2.doSomething();
        Lib5Core1Impl10Api3 lib5core1impl10api3;
        lib5core1impl10api3.doSomething();
        visited = 1;
    }
}

