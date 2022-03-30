// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl20api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl20api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl20api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl20api34(int a, int b) {
    return a + b;
}

int Lib3Core2Impl20Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl20Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl20Api3" << std::endl;
        Lib3Core2Impl20Impl lib3core2impl20impl;
        lib3core2impl20impl.doSomething();
        Lib3Core2Impl21Api1 lib3core2impl21api1;
        lib3core2impl21api1.doSomething();
        Lib3Core2Impl21Api2 lib3core2impl21api2;
        lib3core2impl21api2.doSomething();
        Lib3Core2Impl21Api3 lib3core2impl21api3;
        lib3core2impl21api3.doSomething();
        visited = 1;
    }
}

