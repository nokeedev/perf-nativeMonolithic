// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl23api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl23api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl23api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl23api34(int a, int b) {
    return a + b;
}

int Lib16Core1Impl23Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl23Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl23Api3" << std::endl;
        Lib16Core1Impl23Impl lib16core1impl23impl;
        lib16core1impl23impl.doSomething();
        Lib16Core1Impl24Api1 lib16core1impl24api1;
        lib16core1impl24api1.doSomething();
        Lib16Core1Impl24Api2 lib16core1impl24api2;
        lib16core1impl24api2.doSomething();
        Lib16Core1Impl24Api3 lib16core1impl24api3;
        lib16core1impl24api3.doSomething();
        visited = 1;
    }
}

