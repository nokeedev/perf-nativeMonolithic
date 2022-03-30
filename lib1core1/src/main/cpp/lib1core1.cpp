// GENERATED SOURCE FILE

#include "lib1core1_impl.h"
#include "lib1core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core14(int a, int b) {
    return a + b;
}

int Lib1Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1" << std::endl;
        Lib1Core1Impl1Api1 lib1core1impl1api1;
        lib1core1impl1api1.doSomething();
        Lib1Core1Impl1Api2 lib1core1impl1api2;
        lib1core1impl1api2.doSomething();
        Lib1Core1Impl1Api3 lib1core1impl1api3;
        lib1core1impl1api3.doSomething();
        visited = 1;
    }
}

