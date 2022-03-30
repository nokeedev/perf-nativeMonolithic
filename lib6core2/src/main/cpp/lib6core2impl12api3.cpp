// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl12api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl12api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl12api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl12api34(int a, int b) {
    return a + b;
}

int Lib6Core2Impl12Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl12Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl12Api3" << std::endl;
        Lib6Core2Impl12Impl lib6core2impl12impl;
        lib6core2impl12impl.doSomething();
        Lib6Core2Impl13Api1 lib6core2impl13api1;
        lib6core2impl13api1.doSomething();
        Lib6Core2Impl13Api2 lib6core2impl13api2;
        lib6core2impl13api2.doSomething();
        Lib6Core2Impl13Api3 lib6core2impl13api3;
        lib6core2impl13api3.doSomething();
        visited = 1;
    }
}

