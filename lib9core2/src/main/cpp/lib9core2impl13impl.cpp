// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl13impl4(int a, int b) {
    return a + b;
}

int Lib9Core2Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl13Impl" << std::endl;
        Lib9Core2Impl13Core1 lib9core2impl13core1;
        lib9core2impl13core1.doSomething();
        Lib9Core2Impl13Core2 lib9core2impl13core2;
        lib9core2impl13core2.doSomething();
        Lib9Core2Impl14Api1 lib9core2impl14api1;
        lib9core2impl14api1.doSomething();
        Lib9Core2Impl14Api2 lib9core2impl14api2;
        lib9core2impl14api2.doSomething();
        Lib9Core2Impl14Api3 lib9core2impl14api3;
        lib9core2impl14api3.doSomething();
        visited = 1;
    }
}

