// GENERATED SOURCE FILE

#include "lib8api3_private.h"
#include "lib8api3_impl.h"
#include "lib8impl.h"
#include "lib9api1.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api3impl11api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl11api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl11api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl11api34(int a, int b) {
    return a + b;
}

int Lib8Api3Impl11Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api3Impl11Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api3Impl11Api3" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api3Impl11Impl lib8api3impl11impl;
        lib8api3impl11impl.doSomething();
        Lib8Api3Impl12Api1 lib8api3impl12api1;
        lib8api3impl12api1.doSomething();
        Lib8Api3Impl12Api2 lib8api3impl12api2;
        lib8api3impl12api2.doSomething();
        Lib8Api3Impl12Api3 lib8api3impl12api3;
        lib8api3impl12api3.doSomething();
        visited = 1;
    }
}

