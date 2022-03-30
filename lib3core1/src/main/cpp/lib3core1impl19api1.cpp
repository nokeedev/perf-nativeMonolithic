// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl19api14(int a, int b) {
    return a + b;
}

int Lib3Core1Impl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl19Api1" << std::endl;
        Lib3Core1Impl20Api1 lib3core1impl20api1;
        lib3core1impl20api1.doSomething();
        Lib3Core1Impl19Impl lib3core1impl19impl;
        lib3core1impl19impl.doSomething();
        Lib3Core1Impl20Api2 lib3core1impl20api2;
        lib3core1impl20api2.doSomething();
        Lib3Core1Impl20Api3 lib3core1impl20api3;
        lib3core1impl20api3.doSomething();
        visited = 1;
    }
}

