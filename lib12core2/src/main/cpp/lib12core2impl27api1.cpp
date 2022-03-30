// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl27api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl27api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl27api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl27api14(int a, int b) {
    return a + b;
}

int Lib12Core2Impl27Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl27Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl27Api1" << std::endl;
        Lib12Core2Impl28Api1 lib12core2impl28api1;
        lib12core2impl28api1.doSomething();
        Lib12Core2Impl27Impl lib12core2impl27impl;
        lib12core2impl27impl.doSomething();
        Lib12Core2Impl28Api2 lib12core2impl28api2;
        lib12core2impl28api2.doSomething();
        Lib12Core2Impl28Api3 lib12core2impl28api3;
        lib12core2impl28api3.doSomething();
        visited = 1;
    }
}

