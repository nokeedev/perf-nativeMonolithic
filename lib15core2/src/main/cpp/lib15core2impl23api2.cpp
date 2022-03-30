// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl23api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl23api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl23api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl23api24(int a, int b) {
    return a + b;
}

int Lib15Core2Impl23Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl23Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl23Api2" << std::endl;
        Lib15Core2Impl23Impl lib15core2impl23impl;
        lib15core2impl23impl.doSomething();
        Lib15Core2Impl24Api1 lib15core2impl24api1;
        lib15core2impl24api1.doSomething();
        Lib15Core2Impl24Api2 lib15core2impl24api2;
        lib15core2impl24api2.doSomething();
        Lib15Core2Impl24Api3 lib15core2impl24api3;
        lib15core2impl24api3.doSomething();
        visited = 1;
    }
}

