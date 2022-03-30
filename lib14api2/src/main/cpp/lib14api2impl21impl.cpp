// GENERATED SOURCE FILE

#include "lib14api2_private.h"
#include "lib14api2_impl.h"
#include "lib14impl.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api2impl21impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl21impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl21impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl21impl4(int a, int b) {
    return a + b;
}

int Lib14Api2Impl21Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api2Impl21Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api2Impl21Impl" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api2Impl21Core1 lib14api2impl21core1;
        lib14api2impl21core1.doSomething();
        Lib14Api2Impl21Core2 lib14api2impl21core2;
        lib14api2impl21core2.doSomething();
        Lib14Api2Impl22Api1 lib14api2impl22api1;
        lib14api2impl22api1.doSomething();
        Lib14Api2Impl22Api2 lib14api2impl22api2;
        lib14api2impl22api2.doSomething();
        Lib14Api2Impl22Api3 lib14api2impl22api3;
        lib14api2impl22api3.doSomething();
        visited = 1;
    }
}

