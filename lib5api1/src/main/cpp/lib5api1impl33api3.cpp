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
int lib5api1impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl33api34(int a, int b) {
    return a + b;
}

int Lib5Api1Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api1Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api1Impl33Api3" << std::endl;
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api1Impl33Impl lib5api1impl33impl;
        lib5api1impl33impl.doSomething();
        Lib5Api1Impl34Api lib5api1impl34api;
        lib5api1impl34api.doSomething();
        visited = 1;
    }
}

