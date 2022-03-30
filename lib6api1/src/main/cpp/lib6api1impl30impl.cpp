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
int lib6api1impl30impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl30impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl30impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl30impl4(int a, int b) {
    return a + b;
}

int Lib6Api1Impl30Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1Impl30Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1Impl30Impl" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api1Impl30Core1 lib6api1impl30core1;
        lib6api1impl30core1.doSomething();
        Lib6Api1Impl30Core2 lib6api1impl30core2;
        lib6api1impl30core2.doSomething();
        Lib6Api1Impl31Api1 lib6api1impl31api1;
        lib6api1impl31api1.doSomething();
        Lib6Api1Impl31Api2 lib6api1impl31api2;
        lib6api1impl31api2.doSomething();
        Lib6Api1Impl31Api3 lib6api1impl31api3;
        lib6api1impl31api3.doSomething();
        visited = 1;
    }
}

