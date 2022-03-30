// GENERATED SOURCE FILE

#include "lib3api2_private.h"
#include "lib3api2_impl.h"
#include "lib3impl.h"
#include "lib4api1.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3api2impl14api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api2impl14api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api2impl14api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api2impl14api14(int a, int b) {
    return a + b;
}

int Lib3Api2Impl14Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api2Impl14Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api2Impl14Api1" << std::endl;
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api2Impl15Api1 lib3api2impl15api1;
        lib3api2impl15api1.doSomething();
        Lib3Api2Impl14Impl lib3api2impl14impl;
        lib3api2impl14impl.doSomething();
        Lib3Api2Impl15Api2 lib3api2impl15api2;
        lib3api2impl15api2.doSomething();
        Lib3Api2Impl15Api3 lib3api2impl15api3;
        lib3api2impl15api3.doSomething();
        visited = 1;
    }
}

