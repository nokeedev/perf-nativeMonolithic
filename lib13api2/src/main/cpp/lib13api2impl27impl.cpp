// GENERATED SOURCE FILE

#include "lib13api2_private.h"
#include "lib13api2_impl.h"
#include "lib13impl.h"
#include "lib14api1.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api2impl27impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl27impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl27impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl27impl4(int a, int b) {
    return a + b;
}

int Lib13Api2Impl27Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api2Impl27Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api2Impl27Impl" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api2Impl27Core1 lib13api2impl27core1;
        lib13api2impl27core1.doSomething();
        Lib13Api2Impl27Core2 lib13api2impl27core2;
        lib13api2impl27core2.doSomething();
        Lib13Api2Impl28Api1 lib13api2impl28api1;
        lib13api2impl28api1.doSomething();
        Lib13Api2Impl28Api2 lib13api2impl28api2;
        lib13api2impl28api2.doSomething();
        Lib13Api2Impl28Api3 lib13api2impl28api3;
        lib13api2impl28api3.doSomething();
        visited = 1;
    }
}

