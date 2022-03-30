// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl3api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl3api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl3api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl3api34(int a, int b) {
    return a + b;
}

int Lib3Core1Impl3Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl3Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl3Api3" << std::endl;
        Lib3Core1Impl3Impl lib3core1impl3impl;
        lib3core1impl3impl.doSomething();
        Lib3Core1Impl4Api1 lib3core1impl4api1;
        lib3core1impl4api1.doSomething();
        Lib3Core1Impl4Api2 lib3core1impl4api2;
        lib3core1impl4api2.doSomething();
        Lib3Core1Impl4Api3 lib3core1impl4api3;
        lib3core1impl4api3.doSomething();
        visited = 1;
    }
}

