// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl29api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl29api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl29api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl29api34(int a, int b) {
    return a + b;
}

int Lib3Core2Impl29Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl29Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl29Api3" << std::endl;
        Lib3Core2Impl29Impl lib3core2impl29impl;
        lib3core2impl29impl.doSomething();
        Lib3Core2Impl30Api1 lib3core2impl30api1;
        lib3core2impl30api1.doSomething();
        Lib3Core2Impl30Api2 lib3core2impl30api2;
        lib3core2impl30api2.doSomething();
        Lib3Core2Impl30Api3 lib3core2impl30api3;
        lib3core2impl30api3.doSomething();
        visited = 1;
    }
}

