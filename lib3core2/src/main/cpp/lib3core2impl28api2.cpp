// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl28api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl28api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl28api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl28api24(int a, int b) {
    return a + b;
}

int Lib3Core2Impl28Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl28Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl28Api2" << std::endl;
        Lib3Core2Impl28Impl lib3core2impl28impl;
        lib3core2impl28impl.doSomething();
        Lib3Core2Impl29Api1 lib3core2impl29api1;
        lib3core2impl29api1.doSomething();
        Lib3Core2Impl29Api2 lib3core2impl29api2;
        lib3core2impl29api2.doSomething();
        Lib3Core2Impl29Api3 lib3core2impl29api3;
        lib3core2impl29api3.doSomething();
        visited = 1;
    }
}

