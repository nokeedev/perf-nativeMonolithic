// GENERATED SOURCE FILE

#include "lib12api2_private.h"
#include "lib12api2_impl.h"
#include "lib12impl.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api2impl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl14impl4(int a, int b) {
    return a + b;
}

int Lib12Api2Impl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api2Impl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api2Impl14Impl" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api2Impl14Core1 lib12api2impl14core1;
        lib12api2impl14core1.doSomething();
        Lib12Api2Impl14Core2 lib12api2impl14core2;
        lib12api2impl14core2.doSomething();
        Lib12Api2Impl15Api1 lib12api2impl15api1;
        lib12api2impl15api1.doSomething();
        Lib12Api2Impl15Api2 lib12api2impl15api2;
        lib12api2impl15api2.doSomething();
        Lib12Api2Impl15Api3 lib12api2impl15api3;
        lib12api2impl15api3.doSomething();
        visited = 1;
    }
}

