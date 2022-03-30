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
int lib4api1impl30impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl30impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl30impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl30impl4(int a, int b) {
    return a + b;
}

int Lib4Api1Impl30Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl30Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl30Impl" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl30Core1 lib4api1impl30core1;
        lib4api1impl30core1.doSomething();
        Lib4Api1Impl30Core2 lib4api1impl30core2;
        lib4api1impl30core2.doSomething();
        Lib4Api1Impl31Api1 lib4api1impl31api1;
        lib4api1impl31api1.doSomething();
        Lib4Api1Impl31Api2 lib4api1impl31api2;
        lib4api1impl31api2.doSomething();
        Lib4Api1Impl31Api3 lib4api1impl31api3;
        lib4api1impl31api3.doSomething();
        visited = 1;
    }
}

