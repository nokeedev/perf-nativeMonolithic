// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl27api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl27api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl27api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl27api24(int a, int b) {
    return a + b;
}

int Lib9Core1Impl27Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl27Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl27Api2" << std::endl;
        Lib9Core1Impl27Impl lib9core1impl27impl;
        lib9core1impl27impl.doSomething();
        Lib9Core1Impl28Api1 lib9core1impl28api1;
        lib9core1impl28api1.doSomething();
        Lib9Core1Impl28Api2 lib9core1impl28api2;
        lib9core1impl28api2.doSomething();
        Lib9Core1Impl28Api3 lib9core1impl28api3;
        lib9core1impl28api3.doSomething();
        visited = 1;
    }
}
