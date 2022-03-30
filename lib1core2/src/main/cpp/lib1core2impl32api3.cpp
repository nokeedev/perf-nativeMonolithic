// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl32api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl32api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl32api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl32api34(int a, int b) {
    return a + b;
}

int Lib1Core2Impl32Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl32Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl32Api3" << std::endl;
        Lib1Core2Impl32Impl lib1core2impl32impl;
        lib1core2impl32impl.doSomething();
        Lib1Core2Impl33Api1 lib1core2impl33api1;
        lib1core2impl33api1.doSomething();
        Lib1Core2Impl33Api2 lib1core2impl33api2;
        lib1core2impl33api2.doSomething();
        Lib1Core2Impl33Api3 lib1core2impl33api3;
        lib1core2impl33api3.doSomething();
        visited = 1;
    }
}

