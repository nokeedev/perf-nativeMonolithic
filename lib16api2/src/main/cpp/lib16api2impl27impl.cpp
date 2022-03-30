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
int lib16api2impl27impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl27impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl27impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl27impl4(int a, int b) {
    return a + b;
}

int Lib16Api2Impl27Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl27Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl27Impl" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl27Core1 lib16api2impl27core1;
        lib16api2impl27core1.doSomething();
        Lib16Api2Impl27Core2 lib16api2impl27core2;
        lib16api2impl27core2.doSomething();
        Lib16Api2Impl28Api1 lib16api2impl28api1;
        lib16api2impl28api1.doSomething();
        Lib16Api2Impl28Api2 lib16api2impl28api2;
        lib16api2impl28api2.doSomething();
        Lib16Api2Impl28Api3 lib16api2impl28api3;
        lib16api2impl28api3.doSomething();
        visited = 1;
    }
}

