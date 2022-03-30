// GENERATED SOURCE FILE

#include "lib6api3_private.h"
#include "lib6api3_impl.h"
#include "lib6impl.h"
#include "lib7api1.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api3impl21api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl21api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl21api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl21api14(int a, int b) {
    return a + b;
}

int Lib6Api3Impl21Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api3Impl21Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api3Impl21Api1" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api3Impl22Api1 lib6api3impl22api1;
        lib6api3impl22api1.doSomething();
        Lib6Api3Impl21Impl lib6api3impl21impl;
        lib6api3impl21impl.doSomething();
        Lib6Api3Impl22Api2 lib6api3impl22api2;
        lib6api3impl22api2.doSomething();
        Lib6Api3Impl22Api3 lib6api3impl22api3;
        lib6api3impl22api3.doSomething();
        visited = 1;
    }
}

