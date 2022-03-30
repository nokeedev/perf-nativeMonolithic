// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl21api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl21api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl21api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl21api14(int a, int b) {
    return a + b;
}

int Lib15Core2Impl21Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl21Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl21Api1" << std::endl;
        Lib15Core2Impl22Api1 lib15core2impl22api1;
        lib15core2impl22api1.doSomething();
        Lib15Core2Impl21Impl lib15core2impl21impl;
        lib15core2impl21impl.doSomething();
        Lib15Core2Impl22Api2 lib15core2impl22api2;
        lib15core2impl22api2.doSomething();
        Lib15Core2Impl22Api3 lib15core2impl22api3;
        lib15core2impl22api3.doSomething();
        visited = 1;
    }
}

