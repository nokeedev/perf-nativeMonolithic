// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl14api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl14api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl14api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl14api14(int a, int b) {
    return a + b;
}

int Lib1Core2Impl14Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl14Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl14Api1" << std::endl;
        Lib1Core2Impl15Api1 lib1core2impl15api1;
        lib1core2impl15api1.doSomething();
        Lib1Core2Impl14Impl lib1core2impl14impl;
        lib1core2impl14impl.doSomething();
        Lib1Core2Impl15Api2 lib1core2impl15api2;
        lib1core2impl15api2.doSomething();
        Lib1Core2Impl15Api3 lib1core2impl15api3;
        lib1core2impl15api3.doSomething();
        visited = 1;
    }
}

