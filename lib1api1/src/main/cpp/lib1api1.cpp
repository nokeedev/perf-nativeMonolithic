// GENERATED SOURCE FILE

#include "lib1api1_impl.h"
#include "lib1api1_private.h"
#include "lib2api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api14(int a, int b) {
    return a + b;
}

int Lib1Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api1" << std::endl;
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib1Api1Impl1Api1 lib1api1impl1api1;
        lib1api1impl1api1.doSomething();
        Lib1Api1Impl1Api2 lib1api1impl1api2;
        lib1api1impl1api2.doSomething();
        Lib1Api1Impl1Api3 lib1api1impl1api3;
        lib1api1impl1api3.doSomething();
        visited = 1;
    }
}

