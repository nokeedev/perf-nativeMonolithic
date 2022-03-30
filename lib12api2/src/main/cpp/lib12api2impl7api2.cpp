// GENERATED SOURCE FILE

#include "lib12api2_private.h"
#include "lib12api2_impl.h"
#include "lib12impl.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api2impl7api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl7api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl7api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl7api24(int a, int b) {
    return a + b;
}

int Lib12Api2Impl7Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api2Impl7Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api2Impl7Api2" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api2Impl7Impl lib12api2impl7impl;
        lib12api2impl7impl.doSomething();
        Lib12Api2Impl8Api1 lib12api2impl8api1;
        lib12api2impl8api1.doSomething();
        Lib12Api2Impl8Api2 lib12api2impl8api2;
        lib12api2impl8api2.doSomething();
        Lib12Api2Impl8Api3 lib12api2impl8api3;
        lib12api2impl8api3.doSomething();
        visited = 1;
    }
}

