// GENERATED SOURCE FILE

#include "lib3core1_impl.h"
#include "lib3core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core14(int a, int b) {
    return a + b;
}

int Lib3Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1" << std::endl;
        Lib3Core1Impl1Api1 lib3core1impl1api1;
        lib3core1impl1api1.doSomething();
        Lib3Core1Impl1Api2 lib3core1impl1api2;
        lib3core1impl1api2.doSomething();
        Lib3Core1Impl1Api3 lib3core1impl1api3;
        lib3core1impl1api3.doSomething();
        visited = 1;
    }
}

