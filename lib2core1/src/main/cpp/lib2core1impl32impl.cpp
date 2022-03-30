// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl32impl4(int a, int b) {
    return a + b;
}

int Lib2Core1Impl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl32Impl" << std::endl;
        Lib2Core1Impl32Core1 lib2core1impl32core1;
        lib2core1impl32core1.doSomething();
        Lib2Core1Impl32Core2 lib2core1impl32core2;
        lib2core1impl32core2.doSomething();
        Lib2Core1Impl33Api1 lib2core1impl33api1;
        lib2core1impl33api1.doSomething();
        Lib2Core1Impl33Api2 lib2core1impl33api2;
        lib2core1impl33api2.doSomething();
        Lib2Core1Impl33Api3 lib2core1impl33api3;
        lib2core1impl33api3.doSomething();
        visited = 1;
    }
}

