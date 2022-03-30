// GENERATED SOURCE FILE

#include "lib2api3_private.h"
#include "lib2api3_impl.h"
#include "lib2impl.h"
#include "lib3api1.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api3impl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl19api14(int a, int b) {
    return a + b;
}

int Lib2Api3Impl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api3Impl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api3Impl19Api1" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api3Impl20Api1 lib2api3impl20api1;
        lib2api3impl20api1.doSomething();
        Lib2Api3Impl19Impl lib2api3impl19impl;
        lib2api3impl19impl.doSomething();
        Lib2Api3Impl20Api2 lib2api3impl20api2;
        lib2api3impl20api2.doSomething();
        Lib2Api3Impl20Api3 lib2api3impl20api3;
        lib2api3impl20api3.doSomething();
        visited = 1;
    }
}

