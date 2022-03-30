// GENERATED SOURCE FILE

#include "lib8core2_impl.h"
#include "lib8core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core24(int a, int b) {
    return a + b;
}

int Lib8Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2" << std::endl;
        Lib8Core2Impl1Api1 lib8core2impl1api1;
        lib8core2impl1api1.doSomething();
        Lib8Core2Impl1Api2 lib8core2impl1api2;
        lib8core2impl1api2.doSomething();
        Lib8Core2Impl1Api3 lib8core2impl1api3;
        lib8core2impl1api3.doSomething();
        visited = 1;
    }
}

