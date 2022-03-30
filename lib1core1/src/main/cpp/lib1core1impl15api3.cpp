// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl15api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl15api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl15api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl15api34(int a, int b) {
    return a + b;
}

int Lib1Core1Impl15Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl15Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl15Api3" << std::endl;
        Lib1Core1Impl15Impl lib1core1impl15impl;
        lib1core1impl15impl.doSomething();
        Lib1Core1Impl16Api1 lib1core1impl16api1;
        lib1core1impl16api1.doSomething();
        Lib1Core1Impl16Api2 lib1core1impl16api2;
        lib1core1impl16api2.doSomething();
        Lib1Core1Impl16Api3 lib1core1impl16api3;
        lib1core1impl16api3.doSomething();
        visited = 1;
    }
}

