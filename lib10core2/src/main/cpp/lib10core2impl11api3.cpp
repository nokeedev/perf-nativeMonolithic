// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl11api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl11api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl11api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl11api34(int a, int b) {
    return a + b;
}

int Lib10Core2Impl11Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl11Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl11Api3" << std::endl;
        Lib10Core2Impl11Impl lib10core2impl11impl;
        lib10core2impl11impl.doSomething();
        Lib10Core2Impl12Api1 lib10core2impl12api1;
        lib10core2impl12api1.doSomething();
        Lib10Core2Impl12Api2 lib10core2impl12api2;
        lib10core2impl12api2.doSomething();
        Lib10Core2Impl12Api3 lib10core2impl12api3;
        lib10core2impl12api3.doSomething();
        visited = 1;
    }
}

