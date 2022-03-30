// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl12api24(int a, int b) {
    return a + b;
}

int Lib6Core2Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl12Api2" << std::endl;
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

