// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl1impl4(int a, int b) {
    return a + b;
}

int Lib9Core2Impl1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl1Impl" << std::endl;
        Lib9Core2Impl1Core1 lib9core2impl1core1;
        lib9core2impl1core1.doSomething();
        Lib9Core2Impl1Core2 lib9core2impl1core2;
        lib9core2impl1core2.doSomething();
        Lib9Core2Impl2Api1 lib9core2impl2api1;
        lib9core2impl2api1.doSomething();
        Lib9Core2Impl2Api2 lib9core2impl2api2;
        lib9core2impl2api2.doSomething();
        Lib9Core2Impl2Api3 lib9core2impl2api3;
        lib9core2impl2api3.doSomething();
        visited = 1;
    }
}

