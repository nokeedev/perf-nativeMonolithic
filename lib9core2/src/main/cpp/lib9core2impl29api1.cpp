// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl29api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl29api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl29api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl29api14(int a, int b) {
    return a + b;
}

int Lib9Core2Impl29Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl29Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl29Api1" << std::endl;
        Lib9Core2Impl30Api1 lib9core2impl30api1;
        lib9core2impl30api1.doSomething();
        Lib9Core2Impl29Impl lib9core2impl29impl;
        lib9core2impl29impl.doSomething();
        Lib9Core2Impl30Api2 lib9core2impl30api2;
        lib9core2impl30api2.doSomething();
        Lib9Core2Impl30Api3 lib9core2impl30api3;
        lib9core2impl30api3.doSomething();
        visited = 1;
    }
}

