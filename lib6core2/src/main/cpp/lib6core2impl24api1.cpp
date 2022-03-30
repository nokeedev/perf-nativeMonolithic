// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl24api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl24api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl24api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl24api14(int a, int b) {
    return a + b;
}

int Lib6Core2Impl24Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl24Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl24Api1" << std::endl;
        Lib6Core2Impl25Api1 lib6core2impl25api1;
        lib6core2impl25api1.doSomething();
        Lib6Core2Impl24Impl lib6core2impl24impl;
        lib6core2impl24impl.doSomething();
        Lib6Core2Impl25Api2 lib6core2impl25api2;
        lib6core2impl25api2.doSomething();
        Lib6Core2Impl25Api3 lib6core2impl25api3;
        lib6core2impl25api3.doSomething();
        visited = 1;
    }
}

