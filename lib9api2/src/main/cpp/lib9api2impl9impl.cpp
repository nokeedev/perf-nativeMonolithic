// GENERATED SOURCE FILE

#include "lib9api2_private.h"
#include "lib9api2_impl.h"
#include "lib9impl.h"
#include "lib10api1.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9api2impl9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl9impl4(int a, int b) {
    return a + b;
}

int Lib9Api2Impl9Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api2Impl9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api2Impl9Impl" << std::endl;
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api2Impl9Core1 lib9api2impl9core1;
        lib9api2impl9core1.doSomething();
        Lib9Api2Impl9Core2 lib9api2impl9core2;
        lib9api2impl9core2.doSomething();
        Lib9Api2Impl10Api1 lib9api2impl10api1;
        lib9api2impl10api1.doSomething();
        Lib9Api2Impl10Api2 lib9api2impl10api2;
        lib9api2impl10api2.doSomething();
        Lib9Api2Impl10Api3 lib9api2impl10api3;
        lib9api2impl10api3.doSomething();
        visited = 1;
    }
}

