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
int lib12api2impl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl3impl4(int a, int b) {
    return a + b;
}

int Lib12Api2Impl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api2Impl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api2Impl3Impl" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api2Impl3Core1 lib12api2impl3core1;
        lib12api2impl3core1.doSomething();
        Lib12Api2Impl3Core2 lib12api2impl3core2;
        lib12api2impl3core2.doSomething();
        Lib12Api2Impl4Api1 lib12api2impl4api1;
        lib12api2impl4api1.doSomething();
        Lib12Api2Impl4Api2 lib12api2impl4api2;
        lib12api2impl4api2.doSomething();
        Lib12Api2Impl4Api3 lib12api2impl4api3;
        lib12api2impl4api3.doSomething();
        visited = 1;
    }
}

