// GENERATED SOURCE FILE

#include "lib5api3_private.h"
#include "lib5api3_impl.h"
#include "lib5impl.h"
#include "lib6api1.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api3impl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl11api14(int a, int b) {
    return a + b;
}

int Lib5Api3Impl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api3Impl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api3Impl11Api1" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api3Impl12Api1 lib5api3impl12api1;
        lib5api3impl12api1.doSomething();
        Lib5Api3Impl11Impl lib5api3impl11impl;
        lib5api3impl11impl.doSomething();
        Lib5Api3Impl12Api2 lib5api3impl12api2;
        lib5api3impl12api2.doSomething();
        Lib5Api3Impl12Api3 lib5api3impl12api3;
        lib5api3impl12api3.doSomething();
        visited = 1;
    }
}

