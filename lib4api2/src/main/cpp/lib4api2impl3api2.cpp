// GENERATED SOURCE FILE

#include "lib4api2_private.h"
#include "lib4api2_impl.h"
#include "lib4impl.h"
#include "lib5api1.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api2impl3api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl3api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl3api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl3api24(int a, int b) {
    return a + b;
}

int Lib4Api2Impl3Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api2Impl3Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api2Impl3Api2" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api2Impl3Impl lib4api2impl3impl;
        lib4api2impl3impl.doSomething();
        Lib4Api2Impl4Api1 lib4api2impl4api1;
        lib4api2impl4api1.doSomething();
        Lib4Api2Impl4Api2 lib4api2impl4api2;
        lib4api2impl4api2.doSomething();
        Lib4Api2Impl4Api3 lib4api2impl4api3;
        lib4api2impl4api3.doSomething();
        visited = 1;
    }
}

