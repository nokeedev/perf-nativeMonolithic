// GENERATED SOURCE FILE

#include "lib6api2_private.h"
#include "lib6api2_impl.h"
#include "lib6impl.h"
#include "lib7api1.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api2impl26api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl26api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl26api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl26api14(int a, int b) {
    return a + b;
}

int Lib6Api2Impl26Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api2Impl26Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api2Impl26Api1" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api2Impl27Api1 lib6api2impl27api1;
        lib6api2impl27api1.doSomething();
        Lib6Api2Impl26Impl lib6api2impl26impl;
        lib6api2impl26impl.doSomething();
        Lib6Api2Impl27Api2 lib6api2impl27api2;
        lib6api2impl27api2.doSomething();
        Lib6Api2Impl27Api3 lib6api2impl27api3;
        lib6api2impl27api3.doSomething();
        visited = 1;
    }
}

