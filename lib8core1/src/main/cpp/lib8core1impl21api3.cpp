// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl21api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl21api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl21api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl21api34(int a, int b) {
    return a + b;
}

int Lib8Core1Impl21Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl21Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl21Api3" << std::endl;
        Lib8Core1Impl21Impl lib8core1impl21impl;
        lib8core1impl21impl.doSomething();
        Lib8Core1Impl22Api1 lib8core1impl22api1;
        lib8core1impl22api1.doSomething();
        Lib8Core1Impl22Api2 lib8core1impl22api2;
        lib8core1impl22api2.doSomething();
        Lib8Core1Impl22Api3 lib8core1impl22api3;
        lib8core1impl22api3.doSomething();
        visited = 1;
    }
}

