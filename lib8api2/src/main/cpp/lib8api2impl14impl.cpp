// GENERATED SOURCE FILE

#include "lib8api2_private.h"
#include "lib8api2_impl.h"
#include "lib8impl.h"
#include "lib9api1.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api2impl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl14impl4(int a, int b) {
    return a + b;
}

int Lib8Api2Impl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api2Impl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api2Impl14Impl" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api2Impl14Core1 lib8api2impl14core1;
        lib8api2impl14core1.doSomething();
        Lib8Api2Impl14Core2 lib8api2impl14core2;
        lib8api2impl14core2.doSomething();
        Lib8Api2Impl15Api1 lib8api2impl15api1;
        lib8api2impl15api1.doSomething();
        Lib8Api2Impl15Api2 lib8api2impl15api2;
        lib8api2impl15api2.doSomething();
        Lib8Api2Impl15Api3 lib8api2impl15api3;
        lib8api2impl15api3.doSomething();
        visited = 1;
    }
}

