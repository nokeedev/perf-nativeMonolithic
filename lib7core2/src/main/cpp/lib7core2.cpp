// GENERATED SOURCE FILE

#include "lib7core2_impl.h"
#include "lib7core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core24(int a, int b) {
    return a + b;
}

int Lib7Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2" << std::endl;
        Lib7Core2Impl1Api1 lib7core2impl1api1;
        lib7core2impl1api1.doSomething();
        Lib7Core2Impl1Api2 lib7core2impl1api2;
        lib7core2impl1api2.doSomething();
        Lib7Core2Impl1Api3 lib7core2impl1api3;
        lib7core2impl1api3.doSomething();
        visited = 1;
    }
}

