// GENERATED SOURCE FILE

#include "lib5api2_private.h"
#include "lib5api2_impl.h"
#include "lib5impl.h"
#include "lib6api1.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api2impl29api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl29api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl29api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl29api14(int a, int b) {
    return a + b;
}

int Lib5Api2Impl29Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api2Impl29Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api2Impl29Api1" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api2Impl30Api1 lib5api2impl30api1;
        lib5api2impl30api1.doSomething();
        Lib5Api2Impl29Impl lib5api2impl29impl;
        lib5api2impl29impl.doSomething();
        Lib5Api2Impl30Api2 lib5api2impl30api2;
        lib5api2impl30api2.doSomething();
        Lib5Api2Impl30Api3 lib5api2impl30api3;
        lib5api2impl30api3.doSomething();
        visited = 1;
    }
}
