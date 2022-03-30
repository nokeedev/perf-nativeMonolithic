// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl24api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl24api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl24api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl24api24(int a, int b) {
    return a + b;
}

int Lib13Core2Impl24Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl24Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl24Api2" << std::endl;
        Lib13Core2Impl24Impl lib13core2impl24impl;
        lib13core2impl24impl.doSomething();
        Lib13Core2Impl25Api1 lib13core2impl25api1;
        lib13core2impl25api1.doSomething();
        Lib13Core2Impl25Api2 lib13core2impl25api2;
        lib13core2impl25api2.doSomething();
        Lib13Core2Impl25Api3 lib13core2impl25api3;
        lib13core2impl25api3.doSomething();
        visited = 1;
    }
}

