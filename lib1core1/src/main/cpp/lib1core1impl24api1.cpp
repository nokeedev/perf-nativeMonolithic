// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl24api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl24api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl24api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl24api14(int a, int b) {
    return a + b;
}

int Lib1Core1Impl24Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl24Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl24Api1" << std::endl;
        Lib1Core1Impl25Api1 lib1core1impl25api1;
        lib1core1impl25api1.doSomething();
        Lib1Core1Impl24Impl lib1core1impl24impl;
        lib1core1impl24impl.doSomething();
        Lib1Core1Impl25Api2 lib1core1impl25api2;
        lib1core1impl25api2.doSomething();
        Lib1Core1Impl25Api3 lib1core1impl25api3;
        lib1core1impl25api3.doSomething();
        visited = 1;
    }
}

