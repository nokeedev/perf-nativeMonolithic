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
int lib16api2impl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl33impl4(int a, int b) {
    return a + b;
}

int Lib16Api2Impl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl33Impl" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl33Core lib16api2impl33core;
        lib16api2impl33core.doSomething();
        Lib16Api2Impl34Api lib16api2impl34api;
        lib16api2impl34api.doSomething();
        visited = 1;
    }
}

