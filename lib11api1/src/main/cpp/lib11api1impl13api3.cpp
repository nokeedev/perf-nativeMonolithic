// GENERATED SOURCE FILE

#include "lib11api1_private.h"
#include "lib11api1_impl.h"
#include "lib12api1.h"
#include "lib11impl.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api1impl13api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl13api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl13api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl13api34(int a, int b) {
    return a + b;
}

int Lib11Api1Impl13Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api1Impl13Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api1Impl13Api3" << std::endl;
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api1Impl13Impl lib11api1impl13impl;
        lib11api1impl13impl.doSomething();
        Lib11Api1Impl14Api1 lib11api1impl14api1;
        lib11api1impl14api1.doSomething();
        Lib11Api1Impl14Api2 lib11api1impl14api2;
        lib11api1impl14api2.doSomething();
        Lib11Api1Impl14Api3 lib11api1impl14api3;
        lib11api1impl14api3.doSomething();
        visited = 1;
    }
}

