// GENERATED SOURCE FILE

#include "lib12api1_private.h"
#include "lib12api1_impl.h"
#include "lib13api1.h"
#include "lib12impl.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api1impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl13impl4(int a, int b) {
    return a + b;
}

int Lib12Api1Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api1Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api1Impl13Impl" << std::endl;
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api1Impl13Core1 lib12api1impl13core1;
        lib12api1impl13core1.doSomething();
        Lib12Api1Impl13Core2 lib12api1impl13core2;
        lib12api1impl13core2.doSomething();
        Lib12Api1Impl14Api1 lib12api1impl14api1;
        lib12api1impl14api1.doSomething();
        Lib12Api1Impl14Api2 lib12api1impl14api2;
        lib12api1impl14api2.doSomething();
        Lib12Api1Impl14Api3 lib12api1impl14api3;
        lib12api1impl14api3.doSomething();
        visited = 1;
    }
}

