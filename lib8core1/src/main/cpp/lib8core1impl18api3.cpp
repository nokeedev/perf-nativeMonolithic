// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl18api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl18api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl18api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl18api34(int a, int b) {
    return a + b;
}

int Lib8Core1Impl18Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl18Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl18Api3" << std::endl;
        Lib8Core1Impl18Impl lib8core1impl18impl;
        lib8core1impl18impl.doSomething();
        Lib8Core1Impl19Api1 lib8core1impl19api1;
        lib8core1impl19api1.doSomething();
        Lib8Core1Impl19Api2 lib8core1impl19api2;
        lib8core1impl19api2.doSomething();
        Lib8Core1Impl19Api3 lib8core1impl19api3;
        lib8core1impl19api3.doSomething();
        visited = 1;
    }
}

