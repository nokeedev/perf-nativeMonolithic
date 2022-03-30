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
int lib4api2impl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl32impl4(int a, int b) {
    return a + b;
}

int Lib4Api2Impl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api2Impl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api2Impl32Impl" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api2Impl32Core1 lib4api2impl32core1;
        lib4api2impl32core1.doSomething();
        Lib4Api2Impl32Core2 lib4api2impl32core2;
        lib4api2impl32core2.doSomething();
        Lib4Api2Impl33Api1 lib4api2impl33api1;
        lib4api2impl33api1.doSomething();
        Lib4Api2Impl33Api2 lib4api2impl33api2;
        lib4api2impl33api2.doSomething();
        Lib4Api2Impl33Api3 lib4api2impl33api3;
        lib4api2impl33api3.doSomething();
        visited = 1;
    }
}

