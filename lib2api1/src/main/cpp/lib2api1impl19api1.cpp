// GENERATED SOURCE FILE

#include "lib2api1_private.h"
#include "lib2api1_impl.h"
#include "lib3api1.h"
#include "lib2impl.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api1impl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl19api14(int a, int b) {
    return a + b;
}

int Lib2Api1Impl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api1Impl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api1Impl19Api1" << std::endl;
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api1Impl20Api1 lib2api1impl20api1;
        lib2api1impl20api1.doSomething();
        Lib2Api1Impl19Impl lib2api1impl19impl;
        lib2api1impl19impl.doSomething();
        Lib2Api1Impl20Api2 lib2api1impl20api2;
        lib2api1impl20api2.doSomething();
        Lib2Api1Impl20Api3 lib2api1impl20api3;
        lib2api1impl20api3.doSomething();
        visited = 1;
    }
}

