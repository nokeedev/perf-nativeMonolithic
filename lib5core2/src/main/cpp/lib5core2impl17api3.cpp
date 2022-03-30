// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl17api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl17api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl17api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl17api34(int a, int b) {
    return a + b;
}

int Lib5Core2Impl17Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl17Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl17Api3" << std::endl;
        Lib5Core2Impl17Impl lib5core2impl17impl;
        lib5core2impl17impl.doSomething();
        Lib5Core2Impl18Api1 lib5core2impl18api1;
        lib5core2impl18api1.doSomething();
        Lib5Core2Impl18Api2 lib5core2impl18api2;
        lib5core2impl18api2.doSomething();
        Lib5Core2Impl18Api3 lib5core2impl18api3;
        lib5core2impl18api3.doSomething();
        visited = 1;
    }
}

