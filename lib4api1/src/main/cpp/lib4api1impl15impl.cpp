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
int lib4api1impl15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl15impl4(int a, int b) {
    return a + b;
}

int Lib4Api1Impl15Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl15Impl" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl15Core1 lib4api1impl15core1;
        lib4api1impl15core1.doSomething();
        Lib4Api1Impl15Core2 lib4api1impl15core2;
        lib4api1impl15core2.doSomething();
        Lib4Api1Impl16Api1 lib4api1impl16api1;
        lib4api1impl16api1.doSomething();
        Lib4Api1Impl16Api2 lib4api1impl16api2;
        lib4api1impl16api2.doSomething();
        Lib4Api1Impl16Api3 lib4api1impl16api3;
        lib4api1impl16api3.doSomething();
        visited = 1;
    }
}

