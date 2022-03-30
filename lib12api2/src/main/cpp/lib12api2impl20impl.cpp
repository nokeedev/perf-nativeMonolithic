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
int lib12api2impl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl20impl4(int a, int b) {
    return a + b;
}

int Lib12Api2Impl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api2Impl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api2Impl20Impl" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api2Impl20Core1 lib12api2impl20core1;
        lib12api2impl20core1.doSomething();
        Lib12Api2Impl20Core2 lib12api2impl20core2;
        lib12api2impl20core2.doSomething();
        Lib12Api2Impl21Api1 lib12api2impl21api1;
        lib12api2impl21api1.doSomething();
        Lib12Api2Impl21Api2 lib12api2impl21api2;
        lib12api2impl21api2.doSomething();
        Lib12Api2Impl21Api3 lib12api2impl21api3;
        lib12api2impl21api3.doSomething();
        visited = 1;
    }
}

