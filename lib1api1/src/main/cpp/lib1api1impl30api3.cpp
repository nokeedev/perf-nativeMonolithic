// GENERATED SOURCE FILE

#include "lib1api1_private.h"
#include "lib1api1_impl.h"
#include "lib2api1.h"
#include "lib1impl.h"
#include "lib2api2.h"
#include "lib2api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api1impl30api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl30api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl30api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl30api34(int a, int b) {
    return a + b;
}

int Lib1Api1Impl30Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api1Impl30Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api1Impl30Api3" << std::endl;
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api1Impl30Impl lib1api1impl30impl;
        lib1api1impl30impl.doSomething();
        Lib1Api1Impl31Api1 lib1api1impl31api1;
        lib1api1impl31api1.doSomething();
        Lib1Api1Impl31Api2 lib1api1impl31api2;
        lib1api1impl31api2.doSomething();
        Lib1Api1Impl31Api3 lib1api1impl31api3;
        lib1api1impl31api3.doSomething();
        visited = 1;
    }
}

