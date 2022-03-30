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
int lib9api2impl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl16impl4(int a, int b) {
    return a + b;
}

int Lib9Api2Impl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api2Impl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api2Impl16Impl" << std::endl;
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api2Impl16Core1 lib9api2impl16core1;
        lib9api2impl16core1.doSomething();
        Lib9Api2Impl16Core2 lib9api2impl16core2;
        lib9api2impl16core2.doSomething();
        Lib9Api2Impl17Api1 lib9api2impl17api1;
        lib9api2impl17api1.doSomething();
        Lib9Api2Impl17Api2 lib9api2impl17api2;
        lib9api2impl17api2.doSomething();
        Lib9Api2Impl17Api3 lib9api2impl17api3;
        lib9api2impl17api3.doSomething();
        visited = 1;
    }
}

