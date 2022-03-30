// GENERATED SOURCE FILE

#include "lib6api1_impl.h"
#include "lib6api1_private.h"
#include "lib7api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api14(int a, int b) {
    return a + b;
}

int Lib6Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Api1Impl1Api1 lib6api1impl1api1;
        lib6api1impl1api1.doSomething();
        Lib6Api1Impl1Api2 lib6api1impl1api2;
        lib6api1impl1api2.doSomething();
        Lib6Api1Impl1Api3 lib6api1impl1api3;
        lib6api1impl1api3.doSomething();
        visited = 1;
    }
}

