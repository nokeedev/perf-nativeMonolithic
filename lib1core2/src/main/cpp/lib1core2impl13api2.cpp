// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl13api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl13api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl13api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl13api24(int a, int b) {
    return a + b;
}

int Lib1Core2Impl13Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl13Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl13Api2" << std::endl;
        Lib1Core2Impl13Impl lib1core2impl13impl;
        lib1core2impl13impl.doSomething();
        Lib1Core2Impl14Api1 lib1core2impl14api1;
        lib1core2impl14api1.doSomething();
        Lib1Core2Impl14Api2 lib1core2impl14api2;
        lib1core2impl14api2.doSomething();
        Lib1Core2Impl14Api3 lib1core2impl14api3;
        lib1core2impl14api3.doSomething();
        visited = 1;
    }
}

