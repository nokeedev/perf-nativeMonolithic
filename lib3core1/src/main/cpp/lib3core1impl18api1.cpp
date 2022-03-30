// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl18api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl18api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl18api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl18api14(int a, int b) {
    return a + b;
}

int Lib3Core1Impl18Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl18Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl18Api1" << std::endl;
        Lib3Core1Impl19Api1 lib3core1impl19api1;
        lib3core1impl19api1.doSomething();
        Lib3Core1Impl18Impl lib3core1impl18impl;
        lib3core1impl18impl.doSomething();
        Lib3Core1Impl19Api2 lib3core1impl19api2;
        lib3core1impl19api2.doSomething();
        Lib3Core1Impl19Api3 lib3core1impl19api3;
        lib3core1impl19api3.doSomething();
        visited = 1;
    }
}

