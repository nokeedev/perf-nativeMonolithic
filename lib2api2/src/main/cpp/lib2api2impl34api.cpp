// GENERATED SOURCE FILE

#include "lib2api2_private.h"
#include "lib2api2_impl.h"
#include "lib2impl.h"
#include "lib3api1.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api2impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl34api4(int a, int b) {
    return a + b;
}

int Lib2Api2Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api2Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api2Impl34Api" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api2Impl34Core lib2api2impl34core;
        lib2api2impl34core.doSomething();
        visited = 1;
    }
}

