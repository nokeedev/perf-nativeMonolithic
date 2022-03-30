// GENERATED SOURCE FILE

#include "lib15api2_private.h"
#include "lib15api2_impl.h"
#include "lib15impl.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api2impl27api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl27api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl27api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl27api24(int a, int b) {
    return a + b;
}

int Lib15Api2Impl27Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2Impl27Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2Impl27Api2" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api2Impl27Impl lib15api2impl27impl;
        lib15api2impl27impl.doSomething();
        Lib15Api2Impl28Api1 lib15api2impl28api1;
        lib15api2impl28api1.doSomething();
        Lib15Api2Impl28Api2 lib15api2impl28api2;
        lib15api2impl28api2.doSomething();
        Lib15Api2Impl28Api3 lib15api2impl28api3;
        lib15api2impl28api3.doSomething();
        visited = 1;
    }
}

