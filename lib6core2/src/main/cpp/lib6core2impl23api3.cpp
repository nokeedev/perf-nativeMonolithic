// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl23api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl23api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl23api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl23api34(int a, int b) {
    return a + b;
}

int Lib6Core2Impl23Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl23Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl23Api3" << std::endl;
        Lib6Core2Impl23Impl lib6core2impl23impl;
        lib6core2impl23impl.doSomething();
        Lib6Core2Impl24Api1 lib6core2impl24api1;
        lib6core2impl24api1.doSomething();
        Lib6Core2Impl24Api2 lib6core2impl24api2;
        lib6core2impl24api2.doSomething();
        Lib6Core2Impl24Api3 lib6core2impl24api3;
        lib6core2impl24api3.doSomething();
        visited = 1;
    }
}

