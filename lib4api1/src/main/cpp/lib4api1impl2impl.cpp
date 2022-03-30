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
int lib4api1impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl2impl4(int a, int b) {
    return a + b;
}

int Lib4Api1Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl2Impl" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl2Core1 lib4api1impl2core1;
        lib4api1impl2core1.doSomething();
        Lib4Api1Impl2Core2 lib4api1impl2core2;
        lib4api1impl2core2.doSomething();
        Lib4Api1Impl3Api1 lib4api1impl3api1;
        lib4api1impl3api1.doSomething();
        Lib4Api1Impl3Api2 lib4api1impl3api2;
        lib4api1impl3api2.doSomething();
        Lib4Api1Impl3Api3 lib4api1impl3api3;
        lib4api1impl3api3.doSomething();
        visited = 1;
    }
}

