// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl24api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl24api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl24api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl24api14(int a, int b) {
    return a + b;
}

int Lib8Core2Impl24Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl24Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl24Api1" << std::endl;
        Lib8Core2Impl25Api1 lib8core2impl25api1;
        lib8core2impl25api1.doSomething();
        Lib8Core2Impl24Impl lib8core2impl24impl;
        lib8core2impl24impl.doSomething();
        Lib8Core2Impl25Api2 lib8core2impl25api2;
        lib8core2impl25api2.doSomething();
        Lib8Core2Impl25Api3 lib8core2impl25api3;
        lib8core2impl25api3.doSomething();
        visited = 1;
    }
}

