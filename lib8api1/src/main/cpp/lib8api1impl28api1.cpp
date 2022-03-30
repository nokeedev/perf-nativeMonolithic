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
int lib8api1impl28api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl28api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl28api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl28api14(int a, int b) {
    return a + b;
}

int Lib8Api1Impl28Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api1Impl28Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api1Impl28Api1" << std::endl;
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api1Impl29Api1 lib8api1impl29api1;
        lib8api1impl29api1.doSomething();
        Lib8Api1Impl28Impl lib8api1impl28impl;
        lib8api1impl28impl.doSomething();
        Lib8Api1Impl29Api2 lib8api1impl29api2;
        lib8api1impl29api2.doSomething();
        Lib8Api1Impl29Api3 lib8api1impl29api3;
        lib8api1impl29api3.doSomething();
        visited = 1;
    }
}

