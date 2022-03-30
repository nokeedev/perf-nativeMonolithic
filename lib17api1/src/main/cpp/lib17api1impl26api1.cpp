// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl26api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl26api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl26api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl26api14(int a, int b) {
    return a + b;
}

int Lib17Api1Impl26Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl26Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl26Api1" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl27Api1 lib17api1impl27api1;
        lib17api1impl27api1.doSomething();
        Lib17Api1Impl26Impl lib17api1impl26impl;
        lib17api1impl26impl.doSomething();
        Lib17Api1Impl27Api2 lib17api1impl27api2;
        lib17api1impl27api2.doSomething();
        Lib17Api1Impl27Api3 lib17api1impl27api3;
        lib17api1impl27api3.doSomething();
        visited = 1;
    }
}

