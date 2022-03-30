// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl27api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl27api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl27api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl27api34(int a, int b) {
    return a + b;
}

int Lib15Core2Impl27Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl27Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl27Api3" << std::endl;
        Lib15Core2Impl27Impl lib15core2impl27impl;
        lib15core2impl27impl.doSomething();
        Lib15Core2Impl28Api1 lib15core2impl28api1;
        lib15core2impl28api1.doSomething();
        Lib15Core2Impl28Api2 lib15core2impl28api2;
        lib15core2impl28api2.doSomething();
        Lib15Core2Impl28Api3 lib15core2impl28api3;
        lib15core2impl28api3.doSomething();
        visited = 1;
    }
}

