// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl20api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl20api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl20api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl20api24(int a, int b) {
    return a + b;
}

int Lib1Core2Impl20Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl20Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl20Api2" << std::endl;
        Lib1Core2Impl20Impl lib1core2impl20impl;
        lib1core2impl20impl.doSomething();
        Lib1Core2Impl21Api1 lib1core2impl21api1;
        lib1core2impl21api1.doSomething();
        Lib1Core2Impl21Api2 lib1core2impl21api2;
        lib1core2impl21api2.doSomething();
        Lib1Core2Impl21Api3 lib1core2impl21api3;
        lib1core2impl21api3.doSomething();
        visited = 1;
    }
}

