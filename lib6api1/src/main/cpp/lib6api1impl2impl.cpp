// GENERATED SOURCE FILE

#include "lib6api1_private.h"
#include "lib6api1_impl.h"
#include "lib7api1.h"
#include "lib6impl.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api1impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl2impl4(int a, int b) {
    return a + b;
}

int Lib6Api1Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1Impl2Impl" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api1Impl2Core1 lib6api1impl2core1;
        lib6api1impl2core1.doSomething();
        Lib6Api1Impl2Core2 lib6api1impl2core2;
        lib6api1impl2core2.doSomething();
        Lib6Api1Impl3Api1 lib6api1impl3api1;
        lib6api1impl3api1.doSomething();
        Lib6Api1Impl3Api2 lib6api1impl3api2;
        lib6api1impl3api2.doSomething();
        Lib6Api1Impl3Api3 lib6api1impl3api3;
        lib6api1impl3api3.doSomething();
        visited = 1;
    }
}

