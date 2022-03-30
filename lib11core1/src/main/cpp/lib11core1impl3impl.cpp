// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl3impl4(int a, int b) {
    return a + b;
}

int Lib11Core1Impl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl3Impl" << std::endl;
        Lib11Core1Impl3Core1 lib11core1impl3core1;
        lib11core1impl3core1.doSomething();
        Lib11Core1Impl3Core2 lib11core1impl3core2;
        lib11core1impl3core2.doSomething();
        Lib11Core1Impl4Api1 lib11core1impl4api1;
        lib11core1impl4api1.doSomething();
        Lib11Core1Impl4Api2 lib11core1impl4api2;
        lib11core1impl4api2.doSomething();
        Lib11Core1Impl4Api3 lib11core1impl4api3;
        lib11core1impl4api3.doSomething();
        visited = 1;
    }
}

