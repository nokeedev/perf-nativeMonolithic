// GENERATED SOURCE FILE

#include "lib8api1_impl.h"
#include "lib8api1_private.h"
#include "lib9api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api14(int a, int b) {
    return a + b;
}

int Lib8Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api1" << std::endl;
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib8Api1Impl1Api1 lib8api1impl1api1;
        lib8api1impl1api1.doSomething();
        Lib8Api1Impl1Api2 lib8api1impl1api2;
        lib8api1impl1api2.doSomething();
        Lib8Api1Impl1Api3 lib8api1impl1api3;
        lib8api1impl1api3.doSomething();
        visited = 1;
    }
}

