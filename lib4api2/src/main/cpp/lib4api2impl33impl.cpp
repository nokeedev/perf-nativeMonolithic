// GENERATED SOURCE FILE

#include "lib4api2_private.h"
#include "lib4api2_impl.h"
#include "lib4impl.h"
#include "lib5api1.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api2impl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl33impl4(int a, int b) {
    return a + b;
}

int Lib4Api2Impl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api2Impl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api2Impl33Impl" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api2Impl33Core lib4api2impl33core;
        lib4api2impl33core.doSomething();
        Lib4Api2Impl34Api lib4api2impl34api;
        lib4api2impl34api.doSomething();
        visited = 1;
    }
}

