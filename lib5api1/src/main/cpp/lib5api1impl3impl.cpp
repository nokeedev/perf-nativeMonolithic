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
int lib5api1impl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl3impl4(int a, int b) {
    return a + b;
}

int Lib5Api1Impl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api1Impl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api1Impl3Impl" << std::endl;
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api1Impl3Core1 lib5api1impl3core1;
        lib5api1impl3core1.doSomething();
        Lib5Api1Impl3Core2 lib5api1impl3core2;
        lib5api1impl3core2.doSomething();
        Lib5Api1Impl4Api1 lib5api1impl4api1;
        lib5api1impl4api1.doSomething();
        Lib5Api1Impl4Api2 lib5api1impl4api2;
        lib5api1impl4api2.doSomething();
        Lib5Api1Impl4Api3 lib5api1impl4api3;
        lib5api1impl4api3.doSomething();
        visited = 1;
    }
}

