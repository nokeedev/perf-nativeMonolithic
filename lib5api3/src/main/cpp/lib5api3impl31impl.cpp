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
int lib5api3impl31impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl31impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl31impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl31impl4(int a, int b) {
    return a + b;
}

int Lib5Api3Impl31Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api3Impl31Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api3Impl31Impl" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api3Impl31Core1 lib5api3impl31core1;
        lib5api3impl31core1.doSomething();
        Lib5Api3Impl31Core2 lib5api3impl31core2;
        lib5api3impl31core2.doSomething();
        Lib5Api3Impl32Api1 lib5api3impl32api1;
        lib5api3impl32api1.doSomething();
        Lib5Api3Impl32Api2 lib5api3impl32api2;
        lib5api3impl32api2.doSomething();
        Lib5Api3Impl32Api3 lib5api3impl32api3;
        lib5api3impl32api3.doSomething();
        visited = 1;
    }
}

