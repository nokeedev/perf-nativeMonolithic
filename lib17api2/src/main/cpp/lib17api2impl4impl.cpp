// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl4impl4(int a, int b) {
    return a + b;
}

int Lib17Api2Impl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl4Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl4Core1 lib17api2impl4core1;
        lib17api2impl4core1.doSomething();
        Lib17Api2Impl4Core2 lib17api2impl4core2;
        lib17api2impl4core2.doSomething();
        Lib17Api2Impl5Api1 lib17api2impl5api1;
        lib17api2impl5api1.doSomething();
        Lib17Api2Impl5Api2 lib17api2impl5api2;
        lib17api2impl5api2.doSomething();
        Lib17Api2Impl5Api3 lib17api2impl5api3;
        lib17api2impl5api3.doSomething();
        visited = 1;
    }
}

