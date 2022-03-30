// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl19api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl19api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl19api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl19api24(int a, int b) {
    return a + b;
}

int Lib3Core2Impl19Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl19Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl19Api2" << std::endl;
        Lib3Core2Impl19Impl lib3core2impl19impl;
        lib3core2impl19impl.doSomething();
        Lib3Core2Impl20Api1 lib3core2impl20api1;
        lib3core2impl20api1.doSomething();
        Lib3Core2Impl20Api2 lib3core2impl20api2;
        lib3core2impl20api2.doSomething();
        Lib3Core2Impl20Api3 lib3core2impl20api3;
        lib3core2impl20api3.doSomething();
        visited = 1;
    }
}

