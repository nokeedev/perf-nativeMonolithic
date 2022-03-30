// GENERATED SOURCE FILE

#include "lib5api3_private.h"
#include "lib5api3_impl.h"
#include "lib5impl.h"
#include "lib6api1.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api3impl17impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl17impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl17impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl17impl4(int a, int b) {
    return a + b;
}

int Lib5Api3Impl17Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api3Impl17Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api3Impl17Impl" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api3Impl17Core1 lib5api3impl17core1;
        lib5api3impl17core1.doSomething();
        Lib5Api3Impl17Core2 lib5api3impl17core2;
        lib5api3impl17core2.doSomething();
        Lib5Api3Impl18Api1 lib5api3impl18api1;
        lib5api3impl18api1.doSomething();
        Lib5Api3Impl18Api2 lib5api3impl18api2;
        lib5api3impl18api2.doSomething();
        Lib5Api3Impl18Api3 lib5api3impl18api3;
        lib5api3impl18api3.doSomething();
        visited = 1;
    }
}

