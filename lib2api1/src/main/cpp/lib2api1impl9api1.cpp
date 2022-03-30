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
int lib2api1impl9api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl9api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl9api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl9api14(int a, int b) {
    return a + b;
}

int Lib2Api1Impl9Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api1Impl9Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api1Impl9Api1" << std::endl;
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api1Impl10Api1 lib2api1impl10api1;
        lib2api1impl10api1.doSomething();
        Lib2Api1Impl9Impl lib2api1impl9impl;
        lib2api1impl9impl.doSomething();
        Lib2Api1Impl10Api2 lib2api1impl10api2;
        lib2api1impl10api2.doSomething();
        Lib2Api1Impl10Api3 lib2api1impl10api3;
        lib2api1impl10api3.doSomething();
        visited = 1;
    }
}

