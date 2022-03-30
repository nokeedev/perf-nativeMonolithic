// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl17api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl17api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl17api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl17api34(int a, int b) {
    return a + b;
}

int Lib4Core1Impl17Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl17Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl17Api3" << std::endl;
        Lib4Core1Impl17Impl lib4core1impl17impl;
        lib4core1impl17impl.doSomething();
        Lib4Core1Impl18Api1 lib4core1impl18api1;
        lib4core1impl18api1.doSomething();
        Lib4Core1Impl18Api2 lib4core1impl18api2;
        lib4core1impl18api2.doSomething();
        Lib4Core1Impl18Api3 lib4core1impl18api3;
        lib4core1impl18api3.doSomething();
        visited = 1;
    }
}

