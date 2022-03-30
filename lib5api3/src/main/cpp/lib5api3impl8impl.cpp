// GENERATED SOURCE FILE

#include "lib5api3_private.h"
#include "lib5api3_impl.h"
#include "lib5impl.h"
#include "lib6api1.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api3impl8impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl8impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl8impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl8impl4(int a, int b) {
    return a + b;
}

int Lib5Api3Impl8Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api3Impl8Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api3Impl8Impl" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api3Impl8Core1 lib5api3impl8core1;
        lib5api3impl8core1.doSomething();
        Lib5Api3Impl8Core2 lib5api3impl8core2;
        lib5api3impl8core2.doSomething();
        Lib5Api3Impl9Api1 lib5api3impl9api1;
        lib5api3impl9api1.doSomething();
        Lib5Api3Impl9Api2 lib5api3impl9api2;
        lib5api3impl9api2.doSomething();
        Lib5Api3Impl9Api3 lib5api3impl9api3;
        lib5api3impl9api3.doSomething();
        visited = 1;
    }
}

