// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl12impl4(int a, int b) {
    return a + b;
}

int Lib11Core1Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl12Impl" << std::endl;
        Lib11Core1Impl12Core1 lib11core1impl12core1;
        lib11core1impl12core1.doSomething();
        Lib11Core1Impl12Core2 lib11core1impl12core2;
        lib11core1impl12core2.doSomething();
        Lib11Core1Impl13Api1 lib11core1impl13api1;
        lib11core1impl13api1.doSomething();
        Lib11Core1Impl13Api2 lib11core1impl13api2;
        lib11core1impl13api2.doSomething();
        Lib11Core1Impl13Api3 lib11core1impl13api3;
        lib11core1impl13api3.doSomething();
        visited = 1;
    }
}

