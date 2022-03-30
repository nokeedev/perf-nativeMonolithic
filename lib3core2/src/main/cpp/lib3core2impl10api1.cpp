// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl10api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl10api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl10api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl10api14(int a, int b) {
    return a + b;
}

int Lib3Core2Impl10Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl10Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl10Api1" << std::endl;
        Lib3Core2Impl11Api1 lib3core2impl11api1;
        lib3core2impl11api1.doSomething();
        Lib3Core2Impl10Impl lib3core2impl10impl;
        lib3core2impl10impl.doSomething();
        Lib3Core2Impl11Api2 lib3core2impl11api2;
        lib3core2impl11api2.doSomething();
        Lib3Core2Impl11Api3 lib3core2impl11api3;
        lib3core2impl11api3.doSomething();
        visited = 1;
    }
}

