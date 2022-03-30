// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl12impl4(int a, int b) {
    return a + b;
}

int Lib10Core2Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl12Impl" << std::endl;
        Lib10Core2Impl12Core1 lib10core2impl12core1;
        lib10core2impl12core1.doSomething();
        Lib10Core2Impl12Core2 lib10core2impl12core2;
        lib10core2impl12core2.doSomething();
        Lib10Core2Impl13Api1 lib10core2impl13api1;
        lib10core2impl13api1.doSomething();
        Lib10Core2Impl13Api2 lib10core2impl13api2;
        lib10core2impl13api2.doSomething();
        Lib10Core2Impl13Api3 lib10core2impl13api3;
        lib10core2impl13api3.doSomething();
        visited = 1;
    }
}

