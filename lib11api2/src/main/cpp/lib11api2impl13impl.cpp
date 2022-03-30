// GENERATED SOURCE FILE

#include "lib11api2_private.h"
#include "lib11api2_impl.h"
#include "lib11impl.h"
#include "lib12api1.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api2impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl13impl4(int a, int b) {
    return a + b;
}

int Lib11Api2Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api2Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api2Impl13Impl" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api2Impl13Core1 lib11api2impl13core1;
        lib11api2impl13core1.doSomething();
        Lib11Api2Impl13Core2 lib11api2impl13core2;
        lib11api2impl13core2.doSomething();
        Lib11Api2Impl14Api1 lib11api2impl14api1;
        lib11api2impl14api1.doSomething();
        Lib11Api2Impl14Api2 lib11api2impl14api2;
        lib11api2impl14api2.doSomething();
        Lib11Api2Impl14Api3 lib11api2impl14api3;
        lib11api2impl14api3.doSomething();
        visited = 1;
    }
}

