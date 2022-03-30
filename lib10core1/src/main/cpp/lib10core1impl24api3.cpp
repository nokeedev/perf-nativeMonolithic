// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl24api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl24api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl24api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl24api34(int a, int b) {
    return a + b;
}

int Lib10Core1Impl24Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl24Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl24Api3" << std::endl;
        Lib10Core1Impl24Impl lib10core1impl24impl;
        lib10core1impl24impl.doSomething();
        Lib10Core1Impl25Api1 lib10core1impl25api1;
        lib10core1impl25api1.doSomething();
        Lib10Core1Impl25Api2 lib10core1impl25api2;
        lib10core1impl25api2.doSomething();
        Lib10Core1Impl25Api3 lib10core1impl25api3;
        lib10core1impl25api3.doSomething();
        visited = 1;
    }
}

