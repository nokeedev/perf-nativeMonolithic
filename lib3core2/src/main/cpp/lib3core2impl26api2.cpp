// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl26api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl26api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl26api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl26api24(int a, int b) {
    return a + b;
}

int Lib3Core2Impl26Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl26Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl26Api2" << std::endl;
        Lib3Core2Impl26Impl lib3core2impl26impl;
        lib3core2impl26impl.doSomething();
        Lib3Core2Impl27Api1 lib3core2impl27api1;
        lib3core2impl27api1.doSomething();
        Lib3Core2Impl27Api2 lib3core2impl27api2;
        lib3core2impl27api2.doSomething();
        Lib3Core2Impl27Api3 lib3core2impl27api3;
        lib3core2impl27api3.doSomething();
        visited = 1;
    }
}

