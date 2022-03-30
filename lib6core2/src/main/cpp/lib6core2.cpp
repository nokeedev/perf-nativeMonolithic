// GENERATED SOURCE FILE

#include "lib6core2_impl.h"
#include "lib6core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core24(int a, int b) {
    return a + b;
}

int Lib6Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2" << std::endl;
        Lib6Core2Impl1Api1 lib6core2impl1api1;
        lib6core2impl1api1.doSomething();
        Lib6Core2Impl1Api2 lib6core2impl1api2;
        lib6core2impl1api2.doSomething();
        Lib6Core2Impl1Api3 lib6core2impl1api3;
        lib6core2impl1api3.doSomething();
        visited = 1;
    }
}

