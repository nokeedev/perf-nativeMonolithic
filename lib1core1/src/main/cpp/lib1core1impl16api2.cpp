// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl16api24(int a, int b) {
    return a + b;
}

int Lib1Core1Impl16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl16Api2" << std::endl;
        Lib1Core1Impl16Impl lib1core1impl16impl;
        lib1core1impl16impl.doSomething();
        Lib1Core1Impl17Api1 lib1core1impl17api1;
        lib1core1impl17api1.doSomething();
        Lib1Core1Impl17Api2 lib1core1impl17api2;
        lib1core1impl17api2.doSomething();
        Lib1Core1Impl17Api3 lib1core1impl17api3;
        lib1core1impl17api3.doSomething();
        visited = 1;
    }
}

