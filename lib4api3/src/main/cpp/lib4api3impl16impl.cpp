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
int lib4api3impl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl16impl4(int a, int b) {
    return a + b;
}

int Lib4Api3Impl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api3Impl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api3Impl16Impl" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api3Impl16Core1 lib4api3impl16core1;
        lib4api3impl16core1.doSomething();
        Lib4Api3Impl16Core2 lib4api3impl16core2;
        lib4api3impl16core2.doSomething();
        Lib4Api3Impl17Api1 lib4api3impl17api1;
        lib4api3impl17api1.doSomething();
        Lib4Api3Impl17Api2 lib4api3impl17api2;
        lib4api3impl17api2.doSomething();
        Lib4Api3Impl17Api3 lib4api3impl17api3;
        lib4api3impl17api3.doSomething();
        visited = 1;
    }
}

