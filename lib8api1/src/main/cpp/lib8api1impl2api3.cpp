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
int lib8api1impl2api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl2api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl2api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl2api34(int a, int b) {
    return a + b;
}

int Lib8Api1Impl2Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api1Impl2Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api1Impl2Api3" << std::endl;
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api1Impl2Impl lib8api1impl2impl;
        lib8api1impl2impl.doSomething();
        Lib8Api1Impl3Api1 lib8api1impl3api1;
        lib8api1impl3api1.doSomething();
        Lib8Api1Impl3Api2 lib8api1impl3api2;
        lib8api1impl3api2.doSomething();
        Lib8Api1Impl3Api3 lib8api1impl3api3;
        lib8api1impl3api3.doSomething();
        visited = 1;
    }
}

