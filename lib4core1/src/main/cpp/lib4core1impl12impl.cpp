// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl12impl4(int a, int b) {
    return a + b;
}

int Lib4Core1Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl12Impl" << std::endl;
        Lib4Core1Impl12Core1 lib4core1impl12core1;
        lib4core1impl12core1.doSomething();
        Lib4Core1Impl12Core2 lib4core1impl12core2;
        lib4core1impl12core2.doSomething();
        Lib4Core1Impl13Api1 lib4core1impl13api1;
        lib4core1impl13api1.doSomething();
        Lib4Core1Impl13Api2 lib4core1impl13api2;
        lib4core1impl13api2.doSomething();
        Lib4Core1Impl13Api3 lib4core1impl13api3;
        lib4core1impl13api3.doSomething();
        visited = 1;
    }
}

