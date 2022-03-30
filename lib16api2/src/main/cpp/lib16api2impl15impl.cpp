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
int lib16api2impl15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl15impl4(int a, int b) {
    return a + b;
}

int Lib16Api2Impl15Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl15Impl" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl15Core1 lib16api2impl15core1;
        lib16api2impl15core1.doSomething();
        Lib16Api2Impl15Core2 lib16api2impl15core2;
        lib16api2impl15core2.doSomething();
        Lib16Api2Impl16Api1 lib16api2impl16api1;
        lib16api2impl16api1.doSomething();
        Lib16Api2Impl16Api2 lib16api2impl16api2;
        lib16api2impl16api2.doSomething();
        Lib16Api2Impl16Api3 lib16api2impl16api3;
        lib16api2impl16api3.doSomething();
        visited = 1;
    }
}

