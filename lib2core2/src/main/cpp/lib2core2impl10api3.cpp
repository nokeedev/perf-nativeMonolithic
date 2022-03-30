// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl10api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl10api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl10api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl10api34(int a, int b) {
    return a + b;
}

int Lib2Core2Impl10Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl10Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl10Api3" << std::endl;
        Lib2Core2Impl10Impl lib2core2impl10impl;
        lib2core2impl10impl.doSomething();
        Lib2Core2Impl11Api1 lib2core2impl11api1;
        lib2core2impl11api1.doSomething();
        Lib2Core2Impl11Api2 lib2core2impl11api2;
        lib2core2impl11api2.doSomething();
        Lib2Core2Impl11Api3 lib2core2impl11api3;
        lib2core2impl11api3.doSomething();
        visited = 1;
    }
}

