// GENERATED SOURCE FILE

#include "lib4core2_impl.h"
#include "lib4core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core24(int a, int b) {
    return a + b;
}

int Lib4Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2" << std::endl;
        Lib4Core2Impl1Api1 lib4core2impl1api1;
        lib4core2impl1api1.doSomething();
        Lib4Core2Impl1Api2 lib4core2impl1api2;
        lib4core2impl1api2.doSomething();
        Lib4Core2Impl1Api3 lib4core2impl1api3;
        lib4core2impl1api3.doSomething();
        visited = 1;
    }
}

