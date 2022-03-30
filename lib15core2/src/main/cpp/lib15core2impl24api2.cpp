// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl24api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl24api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl24api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl24api24(int a, int b) {
    return a + b;
}

int Lib15Core2Impl24Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl24Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl24Api2" << std::endl;
        Lib15Core2Impl24Impl lib15core2impl24impl;
        lib15core2impl24impl.doSomething();
        Lib15Core2Impl25Api1 lib15core2impl25api1;
        lib15core2impl25api1.doSomething();
        Lib15Core2Impl25Api2 lib15core2impl25api2;
        lib15core2impl25api2.doSomething();
        Lib15Core2Impl25Api3 lib15core2impl25api3;
        lib15core2impl25api3.doSomething();
        visited = 1;
    }
}

