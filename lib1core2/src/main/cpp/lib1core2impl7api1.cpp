// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl7api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl7api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl7api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl7api14(int a, int b) {
    return a + b;
}

int Lib1Core2Impl7Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl7Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl7Api1" << std::endl;
        Lib1Core2Impl8Api1 lib1core2impl8api1;
        lib1core2impl8api1.doSomething();
        Lib1Core2Impl7Impl lib1core2impl7impl;
        lib1core2impl7impl.doSomething();
        Lib1Core2Impl8Api2 lib1core2impl8api2;
        lib1core2impl8api2.doSomething();
        Lib1Core2Impl8Api3 lib1core2impl8api3;
        lib1core2impl8api3.doSomething();
        visited = 1;
    }
}

