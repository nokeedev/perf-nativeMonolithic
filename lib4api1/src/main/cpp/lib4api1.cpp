// GENERATED SOURCE FILE

#include "lib4api1_impl.h"
#include "lib4api1_private.h"
#include "lib5api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api14(int a, int b) {
    return a + b;
}

int Lib4Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Api1Impl1Api1 lib4api1impl1api1;
        lib4api1impl1api1.doSomething();
        Lib4Api1Impl1Api2 lib4api1impl1api2;
        lib4api1impl1api2.doSomething();
        Lib4Api1Impl1Api3 lib4api1impl1api3;
        lib4api1impl1api3.doSomething();
        visited = 1;
    }
}

