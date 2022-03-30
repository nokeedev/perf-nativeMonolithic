// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl21api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl21api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl21api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl21api14(int a, int b) {
    return a + b;
}

int Lib13Core2Impl21Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl21Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl21Api1" << std::endl;
        Lib13Core2Impl22Api1 lib13core2impl22api1;
        lib13core2impl22api1.doSomething();
        Lib13Core2Impl21Impl lib13core2impl21impl;
        lib13core2impl21impl.doSomething();
        Lib13Core2Impl22Api2 lib13core2impl22api2;
        lib13core2impl22api2.doSomething();
        Lib13Core2Impl22Api3 lib13core2impl22api3;
        lib13core2impl22api3.doSomething();
        visited = 1;
    }
}

