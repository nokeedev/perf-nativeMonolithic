// GENERATED SOURCE FILE

#include "lib11api3_private.h"
#include "lib11api3_impl.h"
#include "lib11impl.h"
#include "lib12api1.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api3impl25api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl25api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl25api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl25api14(int a, int b) {
    return a + b;
}

int Lib11Api3Impl25Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api3Impl25Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api3Impl25Api1" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api3Impl26Api1 lib11api3impl26api1;
        lib11api3impl26api1.doSomething();
        Lib11Api3Impl25Impl lib11api3impl25impl;
        lib11api3impl25impl.doSomething();
        Lib11Api3Impl26Api2 lib11api3impl26api2;
        lib11api3impl26api2.doSomething();
        Lib11Api3Impl26Api3 lib11api3impl26api3;
        lib11api3impl26api3.doSomething();
        visited = 1;
    }
}

