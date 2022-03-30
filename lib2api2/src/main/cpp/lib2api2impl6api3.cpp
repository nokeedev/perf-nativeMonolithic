// GENERATED SOURCE FILE

#include "lib2api2_private.h"
#include "lib2api2_impl.h"
#include "lib2impl.h"
#include "lib3api1.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api2impl6api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl6api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl6api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl6api34(int a, int b) {
    return a + b;
}

int Lib2Api2Impl6Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api2Impl6Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api2Impl6Api3" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api2Impl6Impl lib2api2impl6impl;
        lib2api2impl6impl.doSomething();
        Lib2Api2Impl7Api1 lib2api2impl7api1;
        lib2api2impl7api1.doSomething();
        Lib2Api2Impl7Api2 lib2api2impl7api2;
        lib2api2impl7api2.doSomething();
        Lib2Api2Impl7Api3 lib2api2impl7api3;
        lib2api2impl7api3.doSomething();
        visited = 1;
    }
}

