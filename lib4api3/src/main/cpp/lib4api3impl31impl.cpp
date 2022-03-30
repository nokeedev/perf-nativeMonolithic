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
int lib4api3impl31impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl31impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl31impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl31impl4(int a, int b) {
    return a + b;
}

int Lib4Api3Impl31Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api3Impl31Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api3Impl31Impl" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api3Impl31Core1 lib4api3impl31core1;
        lib4api3impl31core1.doSomething();
        Lib4Api3Impl31Core2 lib4api3impl31core2;
        lib4api3impl31core2.doSomething();
        Lib4Api3Impl32Api1 lib4api3impl32api1;
        lib4api3impl32api1.doSomething();
        Lib4Api3Impl32Api2 lib4api3impl32api2;
        lib4api3impl32api2.doSomething();
        Lib4Api3Impl32Api3 lib4api3impl32api3;
        lib4api3impl32api3.doSomething();
        visited = 1;
    }
}

