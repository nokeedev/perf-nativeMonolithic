// GENERATED SOURCE FILE

#include "lib3api3_private.h"
#include "lib3api3_impl.h"
#include "lib3impl.h"
#include "lib4api1.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3api3impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl2impl4(int a, int b) {
    return a + b;
}

int Lib3Api3Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api3Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api3Impl2Impl" << std::endl;
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api3Impl2Core1 lib3api3impl2core1;
        lib3api3impl2core1.doSomething();
        Lib3Api3Impl2Core2 lib3api3impl2core2;
        lib3api3impl2core2.doSomething();
        Lib3Api3Impl3Api1 lib3api3impl3api1;
        lib3api3impl3api1.doSomething();
        Lib3Api3Impl3Api2 lib3api3impl3api2;
        lib3api3impl3api2.doSomething();
        Lib3Api3Impl3Api3 lib3api3impl3api3;
        lib3api3impl3api3.doSomething();
        visited = 1;
    }
}

