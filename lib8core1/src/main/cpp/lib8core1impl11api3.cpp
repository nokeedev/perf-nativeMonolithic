// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl11api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl11api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl11api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl11api34(int a, int b) {
    return a + b;
}

int Lib8Core1Impl11Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl11Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl11Api3" << std::endl;
        Lib8Core1Impl11Impl lib8core1impl11impl;
        lib8core1impl11impl.doSomething();
        Lib8Core1Impl12Api1 lib8core1impl12api1;
        lib8core1impl12api1.doSomething();
        Lib8Core1Impl12Api2 lib8core1impl12api2;
        lib8core1impl12api2.doSomething();
        Lib8Core1Impl12Api3 lib8core1impl12api3;
        lib8core1impl12api3.doSomething();
        visited = 1;
    }
}

