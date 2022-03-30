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
int lib2api3impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl34api4(int a, int b) {
    return a + b;
}

int Lib2Api3Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api3Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api3Impl34Api" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api3Impl34Core lib2api3impl34core;
        lib2api3impl34core.doSomething();
        visited = 1;
    }
}

