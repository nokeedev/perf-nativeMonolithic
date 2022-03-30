// GENERATED SOURCE FILE

#include "lib13api2_private.h"
#include "lib13api2_impl.h"
#include "lib13impl.h"
#include "lib14api1.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api2impl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl1impl4(int a, int b) {
    return a + b;
}

int Lib13Api2Impl1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api2Impl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api2Impl1Impl" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api2Impl1Core1 lib13api2impl1core1;
        lib13api2impl1core1.doSomething();
        Lib13Api2Impl1Core2 lib13api2impl1core2;
        lib13api2impl1core2.doSomething();
        Lib13Api2Impl2Api1 lib13api2impl2api1;
        lib13api2impl2api1.doSomething();
        Lib13Api2Impl2Api2 lib13api2impl2api2;
        lib13api2impl2api2.doSomething();
        Lib13Api2Impl2Api3 lib13api2impl2api3;
        lib13api2impl2api3.doSomething();
        visited = 1;
    }
}

