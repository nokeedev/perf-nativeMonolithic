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
int lib4api1impl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl25impl4(int a, int b) {
    return a + b;
}

int Lib4Api1Impl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl25Impl" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl25Core1 lib4api1impl25core1;
        lib4api1impl25core1.doSomething();
        Lib4Api1Impl25Core2 lib4api1impl25core2;
        lib4api1impl25core2.doSomething();
        Lib4Api1Impl26Api1 lib4api1impl26api1;
        lib4api1impl26api1.doSomething();
        Lib4Api1Impl26Api2 lib4api1impl26api2;
        lib4api1impl26api2.doSomething();
        Lib4Api1Impl26Api3 lib4api1impl26api3;
        lib4api1impl26api3.doSomething();
        visited = 1;
    }
}

