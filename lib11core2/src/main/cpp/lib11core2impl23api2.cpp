// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl23api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl23api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl23api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl23api24(int a, int b) {
    return a + b;
}

int Lib11Core2Impl23Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl23Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl23Api2" << std::endl;
        Lib11Core2Impl23Impl lib11core2impl23impl;
        lib11core2impl23impl.doSomething();
        Lib11Core2Impl24Api1 lib11core2impl24api1;
        lib11core2impl24api1.doSomething();
        Lib11Core2Impl24Api2 lib11core2impl24api2;
        lib11core2impl24api2.doSomething();
        Lib11Core2Impl24Api3 lib11core2impl24api3;
        lib11core2impl24api3.doSomething();
        visited = 1;
    }
}

