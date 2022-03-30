// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl1impl4(int a, int b) {
    return a + b;
}

int Lib15Core1Impl1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl1Impl" << std::endl;
        Lib15Core1Impl1Core1 lib15core1impl1core1;
        lib15core1impl1core1.doSomething();
        Lib15Core1Impl1Core2 lib15core1impl1core2;
        lib15core1impl1core2.doSomething();
        Lib15Core1Impl2Api1 lib15core1impl2api1;
        lib15core1impl2api1.doSomething();
        Lib15Core1Impl2Api2 lib15core1impl2api2;
        lib15core1impl2api2.doSomething();
        Lib15Core1Impl2Api3 lib15core1impl2api3;
        lib15core1impl2api3.doSomething();
        visited = 1;
    }
}

