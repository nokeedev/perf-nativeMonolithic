// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl18api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl18api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl18api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl18api34(int a, int b) {
    return a + b;
}

int Lib2Core2Impl18Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl18Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl18Api3" << std::endl;
        Lib2Core2Impl18Impl lib2core2impl18impl;
        lib2core2impl18impl.doSomething();
        Lib2Core2Impl19Api1 lib2core2impl19api1;
        lib2core2impl19api1.doSomething();
        Lib2Core2Impl19Api2 lib2core2impl19api2;
        lib2core2impl19api2.doSomething();
        Lib2Core2Impl19Api3 lib2core2impl19api3;
        lib2core2impl19api3.doSomething();
        visited = 1;
    }
}

