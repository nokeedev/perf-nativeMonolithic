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
int lib5api3impl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl1impl4(int a, int b) {
    return a + b;
}

int Lib5Api3Impl1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api3Impl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api3Impl1Impl" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api3Impl1Core1 lib5api3impl1core1;
        lib5api3impl1core1.doSomething();
        Lib5Api3Impl1Core2 lib5api3impl1core2;
        lib5api3impl1core2.doSomething();
        Lib5Api3Impl2Api1 lib5api3impl2api1;
        lib5api3impl2api1.doSomething();
        Lib5Api3Impl2Api2 lib5api3impl2api2;
        lib5api3impl2api2.doSomething();
        Lib5Api3Impl2Api3 lib5api3impl2api3;
        lib5api3impl2api3.doSomething();
        visited = 1;
    }
}

