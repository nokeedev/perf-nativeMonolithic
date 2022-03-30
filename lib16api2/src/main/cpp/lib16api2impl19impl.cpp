// GENERATED SOURCE FILE

#include "lib16api2_private.h"
#include "lib16api2_impl.h"
#include "lib16impl.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api2impl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl19impl4(int a, int b) {
    return a + b;
}

int Lib16Api2Impl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl19Impl" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl19Core1 lib16api2impl19core1;
        lib16api2impl19core1.doSomething();
        Lib16Api2Impl19Core2 lib16api2impl19core2;
        lib16api2impl19core2.doSomething();
        Lib16Api2Impl20Api1 lib16api2impl20api1;
        lib16api2impl20api1.doSomething();
        Lib16Api2Impl20Api2 lib16api2impl20api2;
        lib16api2impl20api2.doSomething();
        Lib16Api2Impl20Api3 lib16api2impl20api3;
        lib16api2impl20api3.doSomething();
        visited = 1;
    }
}

