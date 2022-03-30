// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl1api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl1api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl1api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl1api24(int a, int b) {
    return a + b;
}

int Lib1Core2Impl1Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl1Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl1Api2" << std::endl;
        Lib1Core2Impl1Impl lib1core2impl1impl;
        lib1core2impl1impl.doSomething();
        Lib1Core2Impl2Api1 lib1core2impl2api1;
        lib1core2impl2api1.doSomething();
        Lib1Core2Impl2Api2 lib1core2impl2api2;
        lib1core2impl2api2.doSomething();
        Lib1Core2Impl2Api3 lib1core2impl2api3;
        lib1core2impl2api3.doSomething();
        visited = 1;
    }
}

