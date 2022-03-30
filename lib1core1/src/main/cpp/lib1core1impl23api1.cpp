// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl23api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl23api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl23api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl23api14(int a, int b) {
    return a + b;
}

int Lib1Core1Impl23Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl23Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl23Api1" << std::endl;
        Lib1Core1Impl24Api1 lib1core1impl24api1;
        lib1core1impl24api1.doSomething();
        Lib1Core1Impl23Impl lib1core1impl23impl;
        lib1core1impl23impl.doSomething();
        Lib1Core1Impl24Api2 lib1core1impl24api2;
        lib1core1impl24api2.doSomething();
        Lib1Core1Impl24Api3 lib1core1impl24api3;
        lib1core1impl24api3.doSomething();
        visited = 1;
    }
}

