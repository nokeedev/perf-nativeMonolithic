// GENERATED SOURCE FILE

#include "lib8api1_private.h"
#include "lib8api1_impl.h"
#include "lib9api1.h"
#include "lib8impl.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api1impl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl16impl4(int a, int b) {
    return a + b;
}

int Lib8Api1Impl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api1Impl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api1Impl16Impl" << std::endl;
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api1Impl16Core1 lib8api1impl16core1;
        lib8api1impl16core1.doSomething();
        Lib8Api1Impl16Core2 lib8api1impl16core2;
        lib8api1impl16core2.doSomething();
        Lib8Api1Impl17Api1 lib8api1impl17api1;
        lib8api1impl17api1.doSomething();
        Lib8Api1Impl17Api2 lib8api1impl17api2;
        lib8api1impl17api2.doSomething();
        Lib8Api1Impl17Api3 lib8api1impl17api3;
        lib8api1impl17api3.doSomething();
        visited = 1;
    }
}

