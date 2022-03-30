// GENERATED SOURCE FILE

#include "lib11api3_private.h"
#include "lib11api3_impl.h"
#include "lib11impl.h"
#include "lib12api1.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api3impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl13impl4(int a, int b) {
    return a + b;
}

int Lib11Api3Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api3Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api3Impl13Impl" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api3Impl13Core1 lib11api3impl13core1;
        lib11api3impl13core1.doSomething();
        Lib11Api3Impl13Core2 lib11api3impl13core2;
        lib11api3impl13core2.doSomething();
        Lib11Api3Impl14Api1 lib11api3impl14api1;
        lib11api3impl14api1.doSomething();
        Lib11Api3Impl14Api2 lib11api3impl14api2;
        lib11api3impl14api2.doSomething();
        Lib11Api3Impl14Api3 lib11api3impl14api3;
        lib11api3impl14api3.doSomething();
        visited = 1;
    }
}

