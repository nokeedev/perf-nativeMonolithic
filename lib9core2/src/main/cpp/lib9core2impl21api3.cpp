// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl21api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl21api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl21api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl21api34(int a, int b) {
    return a + b;
}

int Lib9Core2Impl21Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl21Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl21Api3" << std::endl;
        Lib9Core2Impl21Impl lib9core2impl21impl;
        lib9core2impl21impl.doSomething();
        Lib9Core2Impl22Api1 lib9core2impl22api1;
        lib9core2impl22api1.doSomething();
        Lib9Core2Impl22Api2 lib9core2impl22api2;
        lib9core2impl22api2.doSomething();
        Lib9Core2Impl22Api3 lib9core2impl22api3;
        lib9core2impl22api3.doSomething();
        visited = 1;
    }
}

