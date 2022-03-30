// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl2impl4(int a, int b) {
    return a + b;
}

int Lib10Core1Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl2Impl" << std::endl;
        Lib10Core1Impl2Core1 lib10core1impl2core1;
        lib10core1impl2core1.doSomething();
        Lib10Core1Impl2Core2 lib10core1impl2core2;
        lib10core1impl2core2.doSomething();
        Lib10Core1Impl3Api1 lib10core1impl3api1;
        lib10core1impl3api1.doSomething();
        Lib10Core1Impl3Api2 lib10core1impl3api2;
        lib10core1impl3api2.doSomething();
        Lib10Core1Impl3Api3 lib10core1impl3api3;
        lib10core1impl3api3.doSomething();
        visited = 1;
    }
}

