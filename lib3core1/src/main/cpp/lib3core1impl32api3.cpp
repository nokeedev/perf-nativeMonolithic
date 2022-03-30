// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl32api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl32api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl32api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl32api34(int a, int b) {
    return a + b;
}

int Lib3Core1Impl32Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl32Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl32Api3" << std::endl;
        Lib3Core1Impl32Impl lib3core1impl32impl;
        lib3core1impl32impl.doSomething();
        Lib3Core1Impl33Api1 lib3core1impl33api1;
        lib3core1impl33api1.doSomething();
        Lib3Core1Impl33Api2 lib3core1impl33api2;
        lib3core1impl33api2.doSomething();
        Lib3Core1Impl33Api3 lib3core1impl33api3;
        lib3core1impl33api3.doSomething();
        visited = 1;
    }
}

