// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl10impl4(int a, int b) {
    return a + b;
}

int Lib2Core1Impl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl10Impl" << std::endl;
        Lib2Core1Impl10Core1 lib2core1impl10core1;
        lib2core1impl10core1.doSomething();
        Lib2Core1Impl10Core2 lib2core1impl10core2;
        lib2core1impl10core2.doSomething();
        Lib2Core1Impl11Api1 lib2core1impl11api1;
        lib2core1impl11api1.doSomething();
        Lib2Core1Impl11Api2 lib2core1impl11api2;
        lib2core1impl11api2.doSomething();
        Lib2Core1Impl11Api3 lib2core1impl11api3;
        lib2core1impl11api3.doSomething();
        visited = 1;
    }
}

