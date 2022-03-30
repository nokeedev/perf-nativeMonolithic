// GENERATED SOURCE FILE

#include "lib14api1_private.h"
#include "lib14api1_impl.h"
#include "lib15api1.h"
#include "lib14impl.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api1impl17impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl17impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl17impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl17impl4(int a, int b) {
    return a + b;
}

int Lib14Api1Impl17Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl17Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl17Impl" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl17Core1 lib14api1impl17core1;
        lib14api1impl17core1.doSomething();
        Lib14Api1Impl17Core2 lib14api1impl17core2;
        lib14api1impl17core2.doSomething();
        Lib14Api1Impl18Api1 lib14api1impl18api1;
        lib14api1impl18api1.doSomething();
        Lib14Api1Impl18Api2 lib14api1impl18api2;
        lib14api1impl18api2.doSomething();
        Lib14Api1Impl18Api3 lib14api1impl18api3;
        lib14api1impl18api3.doSomething();
        visited = 1;
    }
}

