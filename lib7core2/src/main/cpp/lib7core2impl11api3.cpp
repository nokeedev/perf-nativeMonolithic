// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl11api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl11api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl11api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl11api34(int a, int b) {
    return a + b;
}

int Lib7Core2Impl11Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl11Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl11Api3" << std::endl;
        Lib7Core2Impl11Impl lib7core2impl11impl;
        lib7core2impl11impl.doSomething();
        Lib7Core2Impl12Api1 lib7core2impl12api1;
        lib7core2impl12api1.doSomething();
        Lib7Core2Impl12Api2 lib7core2impl12api2;
        lib7core2impl12api2.doSomething();
        Lib7Core2Impl12Api3 lib7core2impl12api3;
        lib7core2impl12api3.doSomething();
        visited = 1;
    }
}

