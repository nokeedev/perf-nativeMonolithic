// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl27api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl27api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl27api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl27api34(int a, int b) {
    return a + b;
}

int Lib13Core1Impl27Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl27Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl27Api3" << std::endl;
        Lib13Core1Impl27Impl lib13core1impl27impl;
        lib13core1impl27impl.doSomething();
        Lib13Core1Impl28Api1 lib13core1impl28api1;
        lib13core1impl28api1.doSomething();
        Lib13Core1Impl28Api2 lib13core1impl28api2;
        lib13core1impl28api2.doSomething();
        Lib13Core1Impl28Api3 lib13core1impl28api3;
        lib13core1impl28api3.doSomething();
        visited = 1;
    }
}

