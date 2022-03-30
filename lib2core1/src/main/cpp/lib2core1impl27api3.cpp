// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl27api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl27api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl27api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl27api34(int a, int b) {
    return a + b;
}

int Lib2Core1Impl27Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl27Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl27Api3" << std::endl;
        Lib2Core1Impl27Impl lib2core1impl27impl;
        lib2core1impl27impl.doSomething();
        Lib2Core1Impl28Api1 lib2core1impl28api1;
        lib2core1impl28api1.doSomething();
        Lib2Core1Impl28Api2 lib2core1impl28api2;
        lib2core1impl28api2.doSomething();
        Lib2Core1Impl28Api3 lib2core1impl28api3;
        lib2core1impl28api3.doSomething();
        visited = 1;
    }
}

