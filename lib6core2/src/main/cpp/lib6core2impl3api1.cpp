// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl3api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl3api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl3api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl3api14(int a, int b) {
    return a + b;
}

int Lib6Core2Impl3Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl3Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl3Api1" << std::endl;
        Lib6Core2Impl4Api1 lib6core2impl4api1;
        lib6core2impl4api1.doSomething();
        Lib6Core2Impl3Impl lib6core2impl3impl;
        lib6core2impl3impl.doSomething();
        Lib6Core2Impl4Api2 lib6core2impl4api2;
        lib6core2impl4api2.doSomething();
        Lib6Core2Impl4Api3 lib6core2impl4api3;
        lib6core2impl4api3.doSomething();
        visited = 1;
    }
}

