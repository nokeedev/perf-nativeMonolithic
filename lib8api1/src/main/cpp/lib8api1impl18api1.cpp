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
int lib8api1impl18api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl18api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl18api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl18api14(int a, int b) {
    return a + b;
}

int Lib8Api1Impl18Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api1Impl18Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api1Impl18Api1" << std::endl;
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api1Impl19Api1 lib8api1impl19api1;
        lib8api1impl19api1.doSomething();
        Lib8Api1Impl18Impl lib8api1impl18impl;
        lib8api1impl18impl.doSomething();
        Lib8Api1Impl19Api2 lib8api1impl19api2;
        lib8api1impl19api2.doSomething();
        Lib8Api1Impl19Api3 lib8api1impl19api3;
        lib8api1impl19api3.doSomething();
        visited = 1;
    }
}

