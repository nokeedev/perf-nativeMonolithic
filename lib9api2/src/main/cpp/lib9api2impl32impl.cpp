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
int lib9api2impl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl32impl4(int a, int b) {
    return a + b;
}

int Lib9Api2Impl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api2Impl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api2Impl32Impl" << std::endl;
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api2Impl32Core1 lib9api2impl32core1;
        lib9api2impl32core1.doSomething();
        Lib9Api2Impl32Core2 lib9api2impl32core2;
        lib9api2impl32core2.doSomething();
        Lib9Api2Impl33Api1 lib9api2impl33api1;
        lib9api2impl33api1.doSomething();
        Lib9Api2Impl33Api2 lib9api2impl33api2;
        lib9api2impl33api2.doSomething();
        Lib9Api2Impl33Api3 lib9api2impl33api3;
        lib9api2impl33api3.doSomething();
        visited = 1;
    }
}

