// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl31api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl31api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl31api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl31api34(int a, int b) {
    return a + b;
}

int Lib2Core2Impl31Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl31Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl31Api3" << std::endl;
        Lib2Core2Impl31Impl lib2core2impl31impl;
        lib2core2impl31impl.doSomething();
        Lib2Core2Impl32Api1 lib2core2impl32api1;
        lib2core2impl32api1.doSomething();
        Lib2Core2Impl32Api2 lib2core2impl32api2;
        lib2core2impl32api2.doSomething();
        Lib2Core2Impl32Api3 lib2core2impl32api3;
        lib2core2impl32api3.doSomething();
        visited = 1;
    }
}

