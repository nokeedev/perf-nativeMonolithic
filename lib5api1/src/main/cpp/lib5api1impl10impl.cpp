// GENERATED SOURCE FILE

#include "lib5api1_private.h"
#include "lib5api1_impl.h"
#include "lib6api1.h"
#include "lib5impl.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api1impl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl10impl4(int a, int b) {
    return a + b;
}

int Lib5Api1Impl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api1Impl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api1Impl10Impl" << std::endl;
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api1Impl10Core1 lib5api1impl10core1;
        lib5api1impl10core1.doSomething();
        Lib5Api1Impl10Core2 lib5api1impl10core2;
        lib5api1impl10core2.doSomething();
        Lib5Api1Impl11Api1 lib5api1impl11api1;
        lib5api1impl11api1.doSomething();
        Lib5Api1Impl11Api2 lib5api1impl11api2;
        lib5api1impl11api2.doSomething();
        Lib5Api1Impl11Api3 lib5api1impl11api3;
        lib5api1impl11api3.doSomething();
        visited = 1;
    }
}

