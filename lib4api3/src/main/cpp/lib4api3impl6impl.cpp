// GENERATED SOURCE FILE

#include "lib4api3_private.h"
#include "lib4api3_impl.h"
#include "lib4impl.h"
#include "lib5api1.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api3impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl6impl4(int a, int b) {
    return a + b;
}

int Lib4Api3Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api3Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api3Impl6Impl" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api3Impl6Core1 lib4api3impl6core1;
        lib4api3impl6core1.doSomething();
        Lib4Api3Impl6Core2 lib4api3impl6core2;
        lib4api3impl6core2.doSomething();
        Lib4Api3Impl7Api1 lib4api3impl7api1;
        lib4api3impl7api1.doSomething();
        Lib4Api3Impl7Api2 lib4api3impl7api2;
        lib4api3impl7api2.doSomething();
        Lib4Api3Impl7Api3 lib4api3impl7api3;
        lib4api3impl7api3.doSomething();
        visited = 1;
    }
}

