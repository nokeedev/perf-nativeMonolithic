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
int lib14api2impl18impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl18impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl18impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl18impl4(int a, int b) {
    return a + b;
}

int Lib14Api2Impl18Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api2Impl18Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api2Impl18Impl" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api2Impl18Core1 lib14api2impl18core1;
        lib14api2impl18core1.doSomething();
        Lib14Api2Impl18Core2 lib14api2impl18core2;
        lib14api2impl18core2.doSomething();
        Lib14Api2Impl19Api1 lib14api2impl19api1;
        lib14api2impl19api1.doSomething();
        Lib14Api2Impl19Api2 lib14api2impl19api2;
        lib14api2impl19api2.doSomething();
        Lib14Api2Impl19Api3 lib14api2impl19api3;
        lib14api2impl19api3.doSomething();
        visited = 1;
    }
}

