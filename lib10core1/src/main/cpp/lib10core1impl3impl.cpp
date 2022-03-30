// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl3impl4(int a, int b) {
    return a + b;
}

int Lib10Core1Impl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl3Impl" << std::endl;
        Lib10Core1Impl3Core1 lib10core1impl3core1;
        lib10core1impl3core1.doSomething();
        Lib10Core1Impl3Core2 lib10core1impl3core2;
        lib10core1impl3core2.doSomething();
        Lib10Core1Impl4Api1 lib10core1impl4api1;
        lib10core1impl4api1.doSomething();
        Lib10Core1Impl4Api2 lib10core1impl4api2;
        lib10core1impl4api2.doSomething();
        Lib10Core1Impl4Api3 lib10core1impl4api3;
        lib10core1impl4api3.doSomething();
        visited = 1;
    }
}

