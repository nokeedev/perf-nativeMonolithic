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
int lib2api2impl2api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl2api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl2api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl2api34(int a, int b) {
    return a + b;
}

int Lib2Api2Impl2Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api2Impl2Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api2Impl2Api3" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api2Impl2Impl lib2api2impl2impl;
        lib2api2impl2impl.doSomething();
        Lib2Api2Impl3Api1 lib2api2impl3api1;
        lib2api2impl3api1.doSomething();
        Lib2Api2Impl3Api2 lib2api2impl3api2;
        lib2api2impl3api2.doSomething();
        Lib2Api2Impl3Api3 lib2api2impl3api3;
        lib2api2impl3api3.doSomething();
        visited = 1;
    }
}

