// GENERATED SOURCE FILE

#include "lib11api2_private.h"
#include "lib11api2_impl.h"
#include "lib11impl.h"
#include "lib12api1.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api2impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl6impl4(int a, int b) {
    return a + b;
}

int Lib11Api2Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api2Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api2Impl6Impl" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api2Impl6Core1 lib11api2impl6core1;
        lib11api2impl6core1.doSomething();
        Lib11Api2Impl6Core2 lib11api2impl6core2;
        lib11api2impl6core2.doSomething();
        Lib11Api2Impl7Api1 lib11api2impl7api1;
        lib11api2impl7api1.doSomething();
        Lib11Api2Impl7Api2 lib11api2impl7api2;
        lib11api2impl7api2.doSomething();
        Lib11Api2Impl7Api3 lib11api2impl7api3;
        lib11api2impl7api3.doSomething();
        visited = 1;
    }
}
