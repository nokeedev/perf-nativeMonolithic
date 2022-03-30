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
int lib4api3impl26impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl26impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl26impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl26impl4(int a, int b) {
    return a + b;
}

int Lib4Api3Impl26Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api3Impl26Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api3Impl26Impl" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api3Impl26Core1 lib4api3impl26core1;
        lib4api3impl26core1.doSomething();
        Lib4Api3Impl26Core2 lib4api3impl26core2;
        lib4api3impl26core2.doSomething();
        Lib4Api3Impl27Api1 lib4api3impl27api1;
        lib4api3impl27api1.doSomething();
        Lib4Api3Impl27Api2 lib4api3impl27api2;
        lib4api3impl27api2.doSomething();
        Lib4Api3Impl27Api3 lib4api3impl27api3;
        lib4api3impl27api3.doSomething();
        visited = 1;
    }
}

