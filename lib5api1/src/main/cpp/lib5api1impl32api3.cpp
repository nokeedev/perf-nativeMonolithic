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
int lib5api1impl32api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl32api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl32api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl32api34(int a, int b) {
    return a + b;
}

int Lib5Api1Impl32Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api1Impl32Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api1Impl32Api3" << std::endl;
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api1Impl32Impl lib5api1impl32impl;
        lib5api1impl32impl.doSomething();
        Lib5Api1Impl33Api1 lib5api1impl33api1;
        lib5api1impl33api1.doSomething();
        Lib5Api1Impl33Api2 lib5api1impl33api2;
        lib5api1impl33api2.doSomething();
        Lib5Api1Impl33Api3 lib5api1impl33api3;
        lib5api1impl33api3.doSomething();
        visited = 1;
    }
}

