// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl3api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl3api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl3api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl3api24(int a, int b) {
    return a + b;
}

int Lib1Core1Impl3Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl3Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl3Api2" << std::endl;
        Lib1Core1Impl3Impl lib1core1impl3impl;
        lib1core1impl3impl.doSomething();
        Lib1Core1Impl4Api1 lib1core1impl4api1;
        lib1core1impl4api1.doSomething();
        Lib1Core1Impl4Api2 lib1core1impl4api2;
        lib1core1impl4api2.doSomething();
        Lib1Core1Impl4Api3 lib1core1impl4api3;
        lib1core1impl4api3.doSomething();
        visited = 1;
    }
}

