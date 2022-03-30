// GENERATED SOURCE FILE

#include "lib4api2_impl.h"
#include "lib4api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api24(int a, int b) {
    return a + b;
}

int Lib4Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api2" << std::endl;
        Lib4Api2Impl1Api1 lib4api2impl1api1;
        lib4api2impl1api1.doSomething();
        Lib4Api2Impl1Api2 lib4api2impl1api2;
        lib4api2impl1api2.doSomething();
        Lib4Api2Impl1Api3 lib4api2impl1api3;
        lib4api2impl1api3.doSomething();
        visited = 1;
    }
}

