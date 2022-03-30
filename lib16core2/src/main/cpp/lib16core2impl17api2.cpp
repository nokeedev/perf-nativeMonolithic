// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl17api24(int a, int b) {
    return a + b;
}

int Lib16Core2Impl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl17Api2" << std::endl;
        Lib16Core2Impl17Impl lib16core2impl17impl;
        lib16core2impl17impl.doSomething();
        Lib16Core2Impl18Api1 lib16core2impl18api1;
        lib16core2impl18api1.doSomething();
        Lib16Core2Impl18Api2 lib16core2impl18api2;
        lib16core2impl18api2.doSomething();
        Lib16Core2Impl18Api3 lib16core2impl18api3;
        lib16core2impl18api3.doSomething();
        visited = 1;
    }
}

