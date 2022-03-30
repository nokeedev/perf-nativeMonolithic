// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl31api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl31api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl31api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl31api14(int a, int b) {
    return a + b;
}

int Lib1Core2Impl31Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl31Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl31Api1" << std::endl;
        Lib1Core2Impl32Api1 lib1core2impl32api1;
        lib1core2impl32api1.doSomething();
        Lib1Core2Impl31Impl lib1core2impl31impl;
        lib1core2impl31impl.doSomething();
        Lib1Core2Impl32Api2 lib1core2impl32api2;
        lib1core2impl32api2.doSomething();
        Lib1Core2Impl32Api3 lib1core2impl32api3;
        lib1core2impl32api3.doSomething();
        visited = 1;
    }
}

