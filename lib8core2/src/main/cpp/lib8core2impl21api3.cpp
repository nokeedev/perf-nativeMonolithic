// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl21api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl21api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl21api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl21api34(int a, int b) {
    return a + b;
}

int Lib8Core2Impl21Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl21Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl21Api3" << std::endl;
        Lib8Core2Impl21Impl lib8core2impl21impl;
        lib8core2impl21impl.doSomething();
        Lib8Core2Impl22Api1 lib8core2impl22api1;
        lib8core2impl22api1.doSomething();
        Lib8Core2Impl22Api2 lib8core2impl22api2;
        lib8core2impl22api2.doSomething();
        Lib8Core2Impl22Api3 lib8core2impl22api3;
        lib8core2impl22api3.doSomething();
        visited = 1;
    }
}

