// GENERATED SOURCE FILE

#include "lib10api1_impl.h"
#include "lib10api1_private.h"
#include "lib11api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api14(int a, int b) {
    return a + b;
}

int Lib10Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api1" << std::endl;
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib10Api1Impl1Api1 lib10api1impl1api1;
        lib10api1impl1api1.doSomething();
        Lib10Api1Impl1Api2 lib10api1impl1api2;
        lib10api1impl1api2.doSomething();
        Lib10Api1Impl1Api3 lib10api1impl1api3;
        lib10api1impl1api3.doSomething();
        visited = 1;
    }
}

