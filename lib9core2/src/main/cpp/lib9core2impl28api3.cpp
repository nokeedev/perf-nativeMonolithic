// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl28api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl28api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl28api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl28api34(int a, int b) {
    return a + b;
}

int Lib9Core2Impl28Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl28Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl28Api3" << std::endl;
        Lib9Core2Impl28Impl lib9core2impl28impl;
        lib9core2impl28impl.doSomething();
        Lib9Core2Impl29Api1 lib9core2impl29api1;
        lib9core2impl29api1.doSomething();
        Lib9Core2Impl29Api2 lib9core2impl29api2;
        lib9core2impl29api2.doSomething();
        Lib9Core2Impl29Api3 lib9core2impl29api3;
        lib9core2impl29api3.doSomething();
        visited = 1;
    }
}

