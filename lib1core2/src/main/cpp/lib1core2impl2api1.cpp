// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl2api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl2api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl2api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl2api14(int a, int b) {
    return a + b;
}

int Lib1Core2Impl2Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl2Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl2Api1" << std::endl;
        Lib1Core2Impl3Api1 lib1core2impl3api1;
        lib1core2impl3api1.doSomething();
        Lib1Core2Impl2Impl lib1core2impl2impl;
        lib1core2impl2impl.doSomething();
        Lib1Core2Impl3Api2 lib1core2impl3api2;
        lib1core2impl3api2.doSomething();
        Lib1Core2Impl3Api3 lib1core2impl3api3;
        lib1core2impl3api3.doSomething();
        visited = 1;
    }
}

