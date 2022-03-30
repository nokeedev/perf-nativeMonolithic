// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl27api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl27api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl27api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl27api24(int a, int b) {
    return a + b;
}

int Lib12Core1Impl27Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl27Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl27Api2" << std::endl;
        Lib12Core1Impl27Impl lib12core1impl27impl;
        lib12core1impl27impl.doSomething();
        Lib12Core1Impl28Api1 lib12core1impl28api1;
        lib12core1impl28api1.doSomething();
        Lib12Core1Impl28Api2 lib12core1impl28api2;
        lib12core1impl28api2.doSomething();
        Lib12Core1Impl28Api3 lib12core1impl28api3;
        lib12core1impl28api3.doSomething();
        visited = 1;
    }
}

