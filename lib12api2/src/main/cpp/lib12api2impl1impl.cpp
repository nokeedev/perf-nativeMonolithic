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
int lib12api2impl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl1impl4(int a, int b) {
    return a + b;
}

int Lib12Api2Impl1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api2Impl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api2Impl1Impl" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api2Impl1Core1 lib12api2impl1core1;
        lib12api2impl1core1.doSomething();
        Lib12Api2Impl1Core2 lib12api2impl1core2;
        lib12api2impl1core2.doSomething();
        Lib12Api2Impl2Api1 lib12api2impl2api1;
        lib12api2impl2api1.doSomething();
        Lib12Api2Impl2Api2 lib12api2impl2api2;
        lib12api2impl2api2.doSomething();
        Lib12Api2Impl2Api3 lib12api2impl2api3;
        lib12api2impl2api3.doSomething();
        visited = 1;
    }
}

