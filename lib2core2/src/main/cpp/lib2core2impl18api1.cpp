// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl18api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl18api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl18api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl18api14(int a, int b) {
    return a + b;
}

int Lib2Core2Impl18Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl18Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl18Api1" << std::endl;
        Lib2Core2Impl19Api1 lib2core2impl19api1;
        lib2core2impl19api1.doSomething();
        Lib2Core2Impl18Impl lib2core2impl18impl;
        lib2core2impl18impl.doSomething();
        Lib2Core2Impl19Api2 lib2core2impl19api2;
        lib2core2impl19api2.doSomething();
        Lib2Core2Impl19Api3 lib2core2impl19api3;
        lib2core2impl19api3.doSomething();
        visited = 1;
    }
}

