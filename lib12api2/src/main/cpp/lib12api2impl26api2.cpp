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
int lib12api2impl26api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl26api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl26api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl26api24(int a, int b) {
    return a + b;
}

int Lib12Api2Impl26Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api2Impl26Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api2Impl26Api2" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api2Impl26Impl lib12api2impl26impl;
        lib12api2impl26impl.doSomething();
        Lib12Api2Impl27Api1 lib12api2impl27api1;
        lib12api2impl27api1.doSomething();
        Lib12Api2Impl27Api2 lib12api2impl27api2;
        lib12api2impl27api2.doSomething();
        Lib12Api2Impl27Api3 lib12api2impl27api3;
        lib12api2impl27api3.doSomething();
        visited = 1;
    }
}

