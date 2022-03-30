// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl26api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl26api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl26api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl26api34(int a, int b) {
    return a + b;
}

int Lib12Core2Impl26Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl26Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl26Api3" << std::endl;
        Lib12Core2Impl26Impl lib12core2impl26impl;
        lib12core2impl26impl.doSomething();
        Lib12Core2Impl27Api1 lib12core2impl27api1;
        lib12core2impl27api1.doSomething();
        Lib12Core2Impl27Api2 lib12core2impl27api2;
        lib12core2impl27api2.doSomething();
        Lib12Core2Impl27Api3 lib12core2impl27api3;
        lib12core2impl27api3.doSomething();
        visited = 1;
    }
}

