// GENERATED SOURCE FILE

#include "lib4api1_private.h"
#include "lib4api1_impl.h"
#include "lib5api1.h"
#include "lib4impl.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api1impl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl19impl4(int a, int b) {
    return a + b;
}

int Lib4Api1Impl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl19Impl" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl19Core1 lib4api1impl19core1;
        lib4api1impl19core1.doSomething();
        Lib4Api1Impl19Core2 lib4api1impl19core2;
        lib4api1impl19core2.doSomething();
        Lib4Api1Impl20Api1 lib4api1impl20api1;
        lib4api1impl20api1.doSomething();
        Lib4Api1Impl20Api2 lib4api1impl20api2;
        lib4api1impl20api2.doSomething();
        Lib4Api1Impl20Api3 lib4api1impl20api3;
        lib4api1impl20api3.doSomething();
        visited = 1;
    }
}

