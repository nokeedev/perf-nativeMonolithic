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
int lib4api3impl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl20impl4(int a, int b) {
    return a + b;
}

int Lib4Api3Impl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api3Impl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api3Impl20Impl" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api3Impl20Core1 lib4api3impl20core1;
        lib4api3impl20core1.doSomething();
        Lib4Api3Impl20Core2 lib4api3impl20core2;
        lib4api3impl20core2.doSomething();
        Lib4Api3Impl21Api1 lib4api3impl21api1;
        lib4api3impl21api1.doSomething();
        Lib4Api3Impl21Api2 lib4api3impl21api2;
        lib4api3impl21api2.doSomething();
        Lib4Api3Impl21Api3 lib4api3impl21api3;
        lib4api3impl21api3.doSomething();
        visited = 1;
    }
}

