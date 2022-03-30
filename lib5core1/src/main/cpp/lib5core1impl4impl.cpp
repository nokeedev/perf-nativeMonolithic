// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl4impl4(int a, int b) {
    return a + b;
}

int Lib5Core1Impl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl4Impl" << std::endl;
        Lib5Core1Impl4Core1 lib5core1impl4core1;
        lib5core1impl4core1.doSomething();
        Lib5Core1Impl4Core2 lib5core1impl4core2;
        lib5core1impl4core2.doSomething();
        Lib5Core1Impl5Api1 lib5core1impl5api1;
        lib5core1impl5api1.doSomething();
        Lib5Core1Impl5Api2 lib5core1impl5api2;
        lib5core1impl5api2.doSomething();
        Lib5Core1Impl5Api3 lib5core1impl5api3;
        lib5core1impl5api3.doSomething();
        visited = 1;
    }
}

