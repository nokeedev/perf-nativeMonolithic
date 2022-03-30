// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl7api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl7api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl7api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl7api24(int a, int b) {
    return a + b;
}

int Lib3Core2Impl7Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl7Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl7Api2" << std::endl;
        Lib3Core2Impl7Impl lib3core2impl7impl;
        lib3core2impl7impl.doSomething();
        Lib3Core2Impl8Api1 lib3core2impl8api1;
        lib3core2impl8api1.doSomething();
        Lib3Core2Impl8Api2 lib3core2impl8api2;
        lib3core2impl8api2.doSomething();
        Lib3Core2Impl8Api3 lib3core2impl8api3;
        lib3core2impl8api3.doSomething();
        visited = 1;
    }
}

