// GENERATED SOURCE FILE

#include "lib12api3_private.h"
#include "lib12api3_impl.h"
#include "lib12impl.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api3impl14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl14api34(int a, int b) {
    return a + b;
}

int Lib12Api3Impl14Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api3Impl14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api3Impl14Api3" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api3Impl14Impl lib12api3impl14impl;
        lib12api3impl14impl.doSomething();
        Lib12Api3Impl15Api1 lib12api3impl15api1;
        lib12api3impl15api1.doSomething();
        Lib12Api3Impl15Api2 lib12api3impl15api2;
        lib12api3impl15api2.doSomething();
        Lib12Api3Impl15Api3 lib12api3impl15api3;
        lib12api3impl15api3.doSomething();
        visited = 1;
    }
}

