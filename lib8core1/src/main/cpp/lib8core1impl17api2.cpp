// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl17api24(int a, int b) {
    return a + b;
}

int Lib8Core1Impl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl17Api2" << std::endl;
        Lib8Core1Impl17Impl lib8core1impl17impl;
        lib8core1impl17impl.doSomething();
        Lib8Core1Impl18Api1 lib8core1impl18api1;
        lib8core1impl18api1.doSomething();
        Lib8Core1Impl18Api2 lib8core1impl18api2;
        lib8core1impl18api2.doSomething();
        Lib8Core1Impl18Api3 lib8core1impl18api3;
        lib8core1impl18api3.doSomething();
        visited = 1;
    }
}

