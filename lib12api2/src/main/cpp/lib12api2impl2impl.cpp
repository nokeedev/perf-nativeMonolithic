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
int lib12api2impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl2impl4(int a, int b) {
    return a + b;
}

int Lib12Api2Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api2Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api2Impl2Impl" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api2Impl2Core1 lib12api2impl2core1;
        lib12api2impl2core1.doSomething();
        Lib12Api2Impl2Core2 lib12api2impl2core2;
        lib12api2impl2core2.doSomething();
        Lib12Api2Impl3Api1 lib12api2impl3api1;
        lib12api2impl3api1.doSomething();
        Lib12Api2Impl3Api2 lib12api2impl3api2;
        lib12api2impl3api2.doSomething();
        Lib12Api2Impl3Api3 lib12api2impl3api3;
        lib12api2impl3api3.doSomething();
        visited = 1;
    }
}

