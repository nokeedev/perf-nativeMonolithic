// GENERATED SOURCE FILE

#include "lib4api3_private.h"
#include "lib4api3_impl.h"
#include "lib4impl.h"
#include "lib5api1.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api3impl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl24impl4(int a, int b) {
    return a + b;
}

int Lib4Api3Impl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api3Impl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api3Impl24Impl" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api3Impl24Core1 lib4api3impl24core1;
        lib4api3impl24core1.doSomething();
        Lib4Api3Impl24Core2 lib4api3impl24core2;
        lib4api3impl24core2.doSomething();
        Lib4Api3Impl25Api1 lib4api3impl25api1;
        lib4api3impl25api1.doSomething();
        Lib4Api3Impl25Api2 lib4api3impl25api2;
        lib4api3impl25api2.doSomething();
        Lib4Api3Impl25Api3 lib4api3impl25api3;
        lib4api3impl25api3.doSomething();
        visited = 1;
    }
}

