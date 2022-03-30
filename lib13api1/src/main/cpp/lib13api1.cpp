// GENERATED SOURCE FILE

#include "lib13api1_impl.h"
#include "lib13api1_private.h"
#include "lib14api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api14(int a, int b) {
    return a + b;
}

int Lib13Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api1" << std::endl;
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib13Api1Impl1Api1 lib13api1impl1api1;
        lib13api1impl1api1.doSomething();
        Lib13Api1Impl1Api2 lib13api1impl1api2;
        lib13api1impl1api2.doSomething();
        Lib13Api1Impl1Api3 lib13api1impl1api3;
        lib13api1impl1api3.doSomething();
        visited = 1;
    }
}

