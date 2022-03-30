// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl32impl4(int a, int b) {
    return a + b;
}

int Lib17Api2Impl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl32Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl32Core1 lib17api2impl32core1;
        lib17api2impl32core1.doSomething();
        Lib17Api2Impl32Core2 lib17api2impl32core2;
        lib17api2impl32core2.doSomething();
        Lib17Api2Impl33Api1 lib17api2impl33api1;
        lib17api2impl33api1.doSomething();
        Lib17Api2Impl33Api2 lib17api2impl33api2;
        lib17api2impl33api2.doSomething();
        Lib17Api2Impl33Api3 lib17api2impl33api3;
        lib17api2impl33api3.doSomething();
        visited = 1;
    }
}

