// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl18api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl18api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl18api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl18api24(int a, int b) {
    return a + b;
}

int Lib2Core1Impl18Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl18Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl18Api2" << std::endl;
        Lib2Core1Impl18Impl lib2core1impl18impl;
        lib2core1impl18impl.doSomething();
        Lib2Core1Impl19Api1 lib2core1impl19api1;
        lib2core1impl19api1.doSomething();
        Lib2Core1Impl19Api2 lib2core1impl19api2;
        lib2core1impl19api2.doSomething();
        Lib2Core1Impl19Api3 lib2core1impl19api3;
        lib2core1impl19api3.doSomething();
        visited = 1;
    }
}

