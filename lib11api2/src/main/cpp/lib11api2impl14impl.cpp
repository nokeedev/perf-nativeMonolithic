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
int lib11api2impl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl14impl4(int a, int b) {
    return a + b;
}

int Lib11Api2Impl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api2Impl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api2Impl14Impl" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api2Impl14Core1 lib11api2impl14core1;
        lib11api2impl14core1.doSomething();
        Lib11Api2Impl14Core2 lib11api2impl14core2;
        lib11api2impl14core2.doSomething();
        Lib11Api2Impl15Api1 lib11api2impl15api1;
        lib11api2impl15api1.doSomething();
        Lib11Api2Impl15Api2 lib11api2impl15api2;
        lib11api2impl15api2.doSomething();
        Lib11Api2Impl15Api3 lib11api2impl15api3;
        lib11api2impl15api3.doSomething();
        visited = 1;
    }
}

