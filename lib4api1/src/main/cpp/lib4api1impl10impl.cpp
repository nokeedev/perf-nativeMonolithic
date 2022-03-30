// GENERATED SOURCE FILE

#include "lib4api1_private.h"
#include "lib4api1_impl.h"
#include "lib5api1.h"
#include "lib4impl.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api1impl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl10impl4(int a, int b) {
    return a + b;
}

int Lib4Api1Impl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl10Impl" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl10Core1 lib4api1impl10core1;
        lib4api1impl10core1.doSomething();
        Lib4Api1Impl10Core2 lib4api1impl10core2;
        lib4api1impl10core2.doSomething();
        Lib4Api1Impl11Api1 lib4api1impl11api1;
        lib4api1impl11api1.doSomething();
        Lib4Api1Impl11Api2 lib4api1impl11api2;
        lib4api1impl11api2.doSomething();
        Lib4Api1Impl11Api3 lib4api1impl11api3;
        lib4api1impl11api3.doSomething();
        visited = 1;
    }
}

