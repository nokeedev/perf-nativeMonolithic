// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl26api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl26api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl26api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl26api24(int a, int b) {
    return a + b;
}

int Lib9Core2Impl26Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl26Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl26Api2" << std::endl;
        Lib9Core2Impl26Impl lib9core2impl26impl;
        lib9core2impl26impl.doSomething();
        Lib9Core2Impl27Api1 lib9core2impl27api1;
        lib9core2impl27api1.doSomething();
        Lib9Core2Impl27Api2 lib9core2impl27api2;
        lib9core2impl27api2.doSomething();
        Lib9Core2Impl27Api3 lib9core2impl27api3;
        lib9core2impl27api3.doSomething();
        visited = 1;
    }
}

