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
int lib8api2impl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl32impl4(int a, int b) {
    return a + b;
}

int Lib8Api2Impl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api2Impl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api2Impl32Impl" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api2Impl32Core1 lib8api2impl32core1;
        lib8api2impl32core1.doSomething();
        Lib8Api2Impl32Core2 lib8api2impl32core2;
        lib8api2impl32core2.doSomething();
        Lib8Api2Impl33Api1 lib8api2impl33api1;
        lib8api2impl33api1.doSomething();
        Lib8Api2Impl33Api2 lib8api2impl33api2;
        lib8api2impl33api2.doSomething();
        Lib8Api2Impl33Api3 lib8api2impl33api3;
        lib8api2impl33api3.doSomething();
        visited = 1;
    }
}

