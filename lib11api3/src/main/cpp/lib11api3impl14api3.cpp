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
int lib11api3impl14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl14api34(int a, int b) {
    return a + b;
}

int Lib11Api3Impl14Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api3Impl14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api3Impl14Api3" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api3Impl14Impl lib11api3impl14impl;
        lib11api3impl14impl.doSomething();
        Lib11Api3Impl15Api1 lib11api3impl15api1;
        lib11api3impl15api1.doSomething();
        Lib11Api3Impl15Api2 lib11api3impl15api2;
        lib11api3impl15api2.doSomething();
        Lib11Api3Impl15Api3 lib11api3impl15api3;
        lib11api3impl15api3.doSomething();
        visited = 1;
    }
}
