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
int lib11api1impl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl19api14(int a, int b) {
    return a + b;
}

int Lib11Api1Impl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api1Impl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api1Impl19Api1" << std::endl;
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api1Impl20Api1 lib11api1impl20api1;
        lib11api1impl20api1.doSomething();
        Lib11Api1Impl19Impl lib11api1impl19impl;
        lib11api1impl19impl.doSomething();
        Lib11Api1Impl20Api2 lib11api1impl20api2;
        lib11api1impl20api2.doSomething();
        Lib11Api1Impl20Api3 lib11api1impl20api3;
        lib11api1impl20api3.doSomething();
        visited = 1;
    }
}

