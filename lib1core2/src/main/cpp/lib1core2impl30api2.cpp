// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl30api24(int a, int b) {
    return a + b;
}

int Lib1Core2Impl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl30Api2" << std::endl;
        Lib1Core2Impl30Impl lib1core2impl30impl;
        lib1core2impl30impl.doSomething();
        Lib1Core2Impl31Api1 lib1core2impl31api1;
        lib1core2impl31api1.doSomething();
        Lib1Core2Impl31Api2 lib1core2impl31api2;
        lib1core2impl31api2.doSomething();
        Lib1Core2Impl31Api3 lib1core2impl31api3;
        lib1core2impl31api3.doSomething();
        visited = 1;
    }
}

