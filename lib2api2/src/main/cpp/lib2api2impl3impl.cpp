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
int lib2api2impl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl3impl4(int a, int b) {
    return a + b;
}

int Lib2Api2Impl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api2Impl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api2Impl3Impl" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api2Impl3Core1 lib2api2impl3core1;
        lib2api2impl3core1.doSomething();
        Lib2Api2Impl3Core2 lib2api2impl3core2;
        lib2api2impl3core2.doSomething();
        Lib2Api2Impl4Api1 lib2api2impl4api1;
        lib2api2impl4api1.doSomething();
        Lib2Api2Impl4Api2 lib2api2impl4api2;
        lib2api2impl4api2.doSomething();
        Lib2Api2Impl4Api3 lib2api2impl4api3;
        lib2api2impl4api3.doSomething();
        visited = 1;
    }
}

