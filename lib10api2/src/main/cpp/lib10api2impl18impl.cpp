// GENERATED SOURCE FILE

#include "lib10api2_private.h"
#include "lib10api2_impl.h"
#include "lib10impl.h"
#include "lib11api1.h"
#include "lib11api2.h"
#include "lib11api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api2impl18impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl18impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl18impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl18impl4(int a, int b) {
    return a + b;
}

int Lib10Api2Impl18Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api2Impl18Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api2Impl18Impl" << std::endl;
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api2Impl18Core1 lib10api2impl18core1;
        lib10api2impl18core1.doSomething();
        Lib10Api2Impl18Core2 lib10api2impl18core2;
        lib10api2impl18core2.doSomething();
        Lib10Api2Impl19Api1 lib10api2impl19api1;
        lib10api2impl19api1.doSomething();
        Lib10Api2Impl19Api2 lib10api2impl19api2;
        lib10api2impl19api2.doSomething();
        Lib10Api2Impl19Api3 lib10api2impl19api3;
        lib10api2impl19api3.doSomething();
        visited = 1;
    }
}

