// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl6impl4(int a, int b) {
    return a + b;
}

int Lib2Core1Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl6Impl" << std::endl;
        Lib2Core1Impl6Core1 lib2core1impl6core1;
        lib2core1impl6core1.doSomething();
        Lib2Core1Impl6Core2 lib2core1impl6core2;
        lib2core1impl6core2.doSomething();
        Lib2Core1Impl7Api1 lib2core1impl7api1;
        lib2core1impl7api1.doSomething();
        Lib2Core1Impl7Api2 lib2core1impl7api2;
        lib2core1impl7api2.doSomething();
        Lib2Core1Impl7Api3 lib2core1impl7api3;
        lib2core1impl7api3.doSomething();
        visited = 1;
    }
}

