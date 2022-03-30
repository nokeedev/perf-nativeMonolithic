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
int lib16api2impl26impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl26impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl26impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl26impl4(int a, int b) {
    return a + b;
}

int Lib16Api2Impl26Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl26Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl26Impl" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl26Core1 lib16api2impl26core1;
        lib16api2impl26core1.doSomething();
        Lib16Api2Impl26Core2 lib16api2impl26core2;
        lib16api2impl26core2.doSomething();
        Lib16Api2Impl27Api1 lib16api2impl27api1;
        lib16api2impl27api1.doSomething();
        Lib16Api2Impl27Api2 lib16api2impl27api2;
        lib16api2impl27api2.doSomething();
        Lib16Api2Impl27Api3 lib16api2impl27api3;
        lib16api2impl27api3.doSomething();
        visited = 1;
    }
}

