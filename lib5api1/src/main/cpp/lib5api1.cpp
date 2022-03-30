// GENERATED SOURCE FILE

#include "lib5api1_impl.h"
#include "lib5api1_private.h"
#include "lib6api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api14(int a, int b) {
    return a + b;
}

int Lib5Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api1" << std::endl;
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib5Api1Impl1Api1 lib5api1impl1api1;
        lib5api1impl1api1.doSomething();
        Lib5Api1Impl1Api2 lib5api1impl1api2;
        lib5api1impl1api2.doSomething();
        Lib5Api1Impl1Api3 lib5api1impl1api3;
        lib5api1impl1api3.doSomething();
        visited = 1;
    }
}

