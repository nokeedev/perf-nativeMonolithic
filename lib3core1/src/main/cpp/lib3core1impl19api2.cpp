// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl19api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl19api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl19api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl19api24(int a, int b) {
    return a + b;
}

int Lib3Core1Impl19Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl19Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl19Api2" << std::endl;
        Lib3Core1Impl19Impl lib3core1impl19impl;
        lib3core1impl19impl.doSomething();
        Lib3Core1Impl20Api1 lib3core1impl20api1;
        lib3core1impl20api1.doSomething();
        Lib3Core1Impl20Api2 lib3core1impl20api2;
        lib3core1impl20api2.doSomething();
        Lib3Core1Impl20Api3 lib3core1impl20api3;
        lib3core1impl20api3.doSomething();
        visited = 1;
    }
}

