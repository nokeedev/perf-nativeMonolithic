// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl31api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl31api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl31api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl31api34(int a, int b) {
    return a + b;
}

int Lib1Core1Impl31Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl31Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl31Api3" << std::endl;
        Lib1Core1Impl31Impl lib1core1impl31impl;
        lib1core1impl31impl.doSomething();
        Lib1Core1Impl32Api1 lib1core1impl32api1;
        lib1core1impl32api1.doSomething();
        Lib1Core1Impl32Api2 lib1core1impl32api2;
        lib1core1impl32api2.doSomething();
        Lib1Core1Impl32Api3 lib1core1impl32api3;
        lib1core1impl32api3.doSomething();
        visited = 1;
    }
}

