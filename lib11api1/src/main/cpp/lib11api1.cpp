// GENERATED SOURCE FILE

#include "lib11api1_impl.h"
#include "lib11api1_private.h"
#include "lib12api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api14(int a, int b) {
    return a + b;
}

int Lib11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api1" << std::endl;
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib11Api1Impl1Api1 lib11api1impl1api1;
        lib11api1impl1api1.doSomething();
        Lib11Api1Impl1Api2 lib11api1impl1api2;
        lib11api1impl1api2.doSomething();
        Lib11Api1Impl1Api3 lib11api1impl1api3;
        lib11api1impl1api3.doSomething();
        visited = 1;
    }
}

