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
int lib5api1impl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl14impl4(int a, int b) {
    return a + b;
}

int Lib5Api1Impl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api1Impl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api1Impl14Impl" << std::endl;
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api1Impl14Core1 lib5api1impl14core1;
        lib5api1impl14core1.doSomething();
        Lib5Api1Impl14Core2 lib5api1impl14core2;
        lib5api1impl14core2.doSomething();
        Lib5Api1Impl15Api1 lib5api1impl15api1;
        lib5api1impl15api1.doSomething();
        Lib5Api1Impl15Api2 lib5api1impl15api2;
        lib5api1impl15api2.doSomething();
        Lib5Api1Impl15Api3 lib5api1impl15api3;
        lib5api1impl15api3.doSomething();
        visited = 1;
    }
}

