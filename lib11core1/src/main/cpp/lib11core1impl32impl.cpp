// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl32impl4(int a, int b) {
    return a + b;
}

int Lib11Core1Impl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl32Impl" << std::endl;
        Lib11Core1Impl32Core1 lib11core1impl32core1;
        lib11core1impl32core1.doSomething();
        Lib11Core1Impl32Core2 lib11core1impl32core2;
        lib11core1impl32core2.doSomething();
        Lib11Core1Impl33Api1 lib11core1impl33api1;
        lib11core1impl33api1.doSomething();
        Lib11Core1Impl33Api2 lib11core1impl33api2;
        lib11core1impl33api2.doSomething();
        Lib11Core1Impl33Api3 lib11core1impl33api3;
        lib11core1impl33api3.doSomething();
        visited = 1;
    }
}

