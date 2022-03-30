// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl32api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl32api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl32api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl32api14(int a, int b) {
    return a + b;
}

int Lib1Core2Impl32Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl32Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl32Api1" << std::endl;
        Lib1Core2Impl33Api1 lib1core2impl33api1;
        lib1core2impl33api1.doSomething();
        Lib1Core2Impl32Impl lib1core2impl32impl;
        lib1core2impl32impl.doSomething();
        Lib1Core2Impl33Api2 lib1core2impl33api2;
        lib1core2impl33api2.doSomething();
        Lib1Core2Impl33Api3 lib1core2impl33api3;
        lib1core2impl33api3.doSomething();
        visited = 1;
    }
}

