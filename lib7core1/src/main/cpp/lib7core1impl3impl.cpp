// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl3impl4(int a, int b) {
    return a + b;
}

int Lib7Core1Impl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl3Impl" << std::endl;
        Lib7Core1Impl3Core1 lib7core1impl3core1;
        lib7core1impl3core1.doSomething();
        Lib7Core1Impl3Core2 lib7core1impl3core2;
        lib7core1impl3core2.doSomething();
        Lib7Core1Impl4Api1 lib7core1impl4api1;
        lib7core1impl4api1.doSomething();
        Lib7Core1Impl4Api2 lib7core1impl4api2;
        lib7core1impl4api2.doSomething();
        Lib7Core1Impl4Api3 lib7core1impl4api3;
        lib7core1impl4api3.doSomething();
        visited = 1;
    }
}

