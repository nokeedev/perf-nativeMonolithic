// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl15api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl15api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl15api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl15api34(int a, int b) {
    return a + b;
}

int Lib3Core1Impl15Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl15Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl15Api3" << std::endl;
        Lib3Core1Impl15Impl lib3core1impl15impl;
        lib3core1impl15impl.doSomething();
        Lib3Core1Impl16Api1 lib3core1impl16api1;
        lib3core1impl16api1.doSomething();
        Lib3Core1Impl16Api2 lib3core1impl16api2;
        lib3core1impl16api2.doSomething();
        Lib3Core1Impl16Api3 lib3core1impl16api3;
        lib3core1impl16api3.doSomething();
        visited = 1;
    }
}

