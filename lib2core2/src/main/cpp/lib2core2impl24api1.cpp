// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl24api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl24api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl24api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl24api14(int a, int b) {
    return a + b;
}

int Lib2Core2Impl24Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl24Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl24Api1" << std::endl;
        Lib2Core2Impl25Api1 lib2core2impl25api1;
        lib2core2impl25api1.doSomething();
        Lib2Core2Impl24Impl lib2core2impl24impl;
        lib2core2impl24impl.doSomething();
        Lib2Core2Impl25Api2 lib2core2impl25api2;
        lib2core2impl25api2.doSomething();
        Lib2Core2Impl25Api3 lib2core2impl25api3;
        lib2core2impl25api3.doSomething();
        visited = 1;
    }
}

