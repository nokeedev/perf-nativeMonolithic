// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl23api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl23api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl23api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl23api14(int a, int b) {
    return a + b;
}

int Lib10Core2Impl23Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl23Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl23Api1" << std::endl;
        Lib10Core2Impl24Api1 lib10core2impl24api1;
        lib10core2impl24api1.doSomething();
        Lib10Core2Impl23Impl lib10core2impl23impl;
        lib10core2impl23impl.doSomething();
        Lib10Core2Impl24Api2 lib10core2impl24api2;
        lib10core2impl24api2.doSomething();
        Lib10Core2Impl24Api3 lib10core2impl24api3;
        lib10core2impl24api3.doSomething();
        visited = 1;
    }
}

