// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl14api34(int a, int b) {
    return a + b;
}

int Lib3Core2Impl14Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl14Api3" << std::endl;
        Lib3Core2Impl14Impl lib3core2impl14impl;
        lib3core2impl14impl.doSomething();
        Lib3Core2Impl15Api1 lib3core2impl15api1;
        lib3core2impl15api1.doSomething();
        Lib3Core2Impl15Api2 lib3core2impl15api2;
        lib3core2impl15api2.doSomething();
        Lib3Core2Impl15Api3 lib3core2impl15api3;
        lib3core2impl15api3.doSomething();
        visited = 1;
    }
}

