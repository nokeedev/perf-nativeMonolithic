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
int lib6api1impl21impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl21impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl21impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl21impl4(int a, int b) {
    return a + b;
}

int Lib6Api1Impl21Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1Impl21Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1Impl21Impl" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api1Impl21Core1 lib6api1impl21core1;
        lib6api1impl21core1.doSomething();
        Lib6Api1Impl21Core2 lib6api1impl21core2;
        lib6api1impl21core2.doSomething();
        Lib6Api1Impl22Api1 lib6api1impl22api1;
        lib6api1impl22api1.doSomething();
        Lib6Api1Impl22Api2 lib6api1impl22api2;
        lib6api1impl22api2.doSomething();
        Lib6Api1Impl22Api3 lib6api1impl22api3;
        lib6api1impl22api3.doSomething();
        visited = 1;
    }
}

