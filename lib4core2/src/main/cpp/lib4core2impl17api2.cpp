// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl17api24(int a, int b) {
    return a + b;
}

int Lib4Core2Impl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl17Api2" << std::endl;
        Lib4Core2Impl17Impl lib4core2impl17impl;
        lib4core2impl17impl.doSomething();
        Lib4Core2Impl18Api1 lib4core2impl18api1;
        lib4core2impl18api1.doSomething();
        Lib4Core2Impl18Api2 lib4core2impl18api2;
        lib4core2impl18api2.doSomething();
        Lib4Core2Impl18Api3 lib4core2impl18api3;
        lib4core2impl18api3.doSomething();
        visited = 1;
    }
}

