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
int lib2api1impl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl30api24(int a, int b) {
    return a + b;
}

int Lib2Api1Impl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api1Impl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api1Impl30Api2" << std::endl;
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api1Impl30Impl lib2api1impl30impl;
        lib2api1impl30impl.doSomething();
        Lib2Api1Impl31Api1 lib2api1impl31api1;
        lib2api1impl31api1.doSomething();
        Lib2Api1Impl31Api2 lib2api1impl31api2;
        lib2api1impl31api2.doSomething();
        Lib2Api1Impl31Api3 lib2api1impl31api3;
        lib2api1impl31api3.doSomething();
        visited = 1;
    }
}

