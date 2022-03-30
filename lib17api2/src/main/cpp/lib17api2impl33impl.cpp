// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl33impl4(int a, int b) {
    return a + b;
}

int Lib17Api2Impl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl33Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl33Core lib17api2impl33core;
        lib17api2impl33core.doSomething();
        Lib17Api2Impl34Api lib17api2impl34api;
        lib17api2impl34api.doSomething();
        visited = 1;
    }
}

