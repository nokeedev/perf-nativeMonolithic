// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl27api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl27api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl27api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl27api24(int a, int b) {
    return a + b;
}

int Lib9Core2Impl27Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl27Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl27Api2" << std::endl;
        Lib9Core2Impl27Impl lib9core2impl27impl;
        lib9core2impl27impl.doSomething();
        Lib9Core2Impl28Api1 lib9core2impl28api1;
        lib9core2impl28api1.doSomething();
        Lib9Core2Impl28Api2 lib9core2impl28api2;
        lib9core2impl28api2.doSomething();
        Lib9Core2Impl28Api3 lib9core2impl28api3;
        lib9core2impl28api3.doSomething();
        visited = 1;
    }
}

