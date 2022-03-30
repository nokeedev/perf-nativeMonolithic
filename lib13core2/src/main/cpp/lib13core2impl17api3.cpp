// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl17api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl17api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl17api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl17api34(int a, int b) {
    return a + b;
}

int Lib13Core2Impl17Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl17Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl17Api3" << std::endl;
        Lib13Core2Impl17Impl lib13core2impl17impl;
        lib13core2impl17impl.doSomething();
        Lib13Core2Impl18Api1 lib13core2impl18api1;
        lib13core2impl18api1.doSomething();
        Lib13Core2Impl18Api2 lib13core2impl18api2;
        lib13core2impl18api2.doSomething();
        Lib13Core2Impl18Api3 lib13core2impl18api3;
        lib13core2impl18api3.doSomething();
        visited = 1;
    }
}

