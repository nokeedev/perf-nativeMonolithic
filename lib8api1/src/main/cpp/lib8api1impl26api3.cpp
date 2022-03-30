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
int lib8api1impl26api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl26api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl26api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl26api34(int a, int b) {
    return a + b;
}

int Lib8Api1Impl26Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api1Impl26Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api1Impl26Api3" << std::endl;
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api1Impl26Impl lib8api1impl26impl;
        lib8api1impl26impl.doSomething();
        Lib8Api1Impl27Api1 lib8api1impl27api1;
        lib8api1impl27api1.doSomething();
        Lib8Api1Impl27Api2 lib8api1impl27api2;
        lib8api1impl27api2.doSomething();
        Lib8Api1Impl27Api3 lib8api1impl27api3;
        lib8api1impl27api3.doSomething();
        visited = 1;
    }
}

