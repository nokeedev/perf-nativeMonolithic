// GENERATED SOURCE FILE

#include "lib3api3_private.h"
#include "lib3api3_impl.h"
#include "lib3impl.h"
#include "lib4api1.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3api3impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl34api4(int a, int b) {
    return a + b;
}

int Lib3Api3Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api3Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api3Impl34Api" << std::endl;
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api3Impl34Core lib3api3impl34core;
        lib3api3impl34core.doSomething();
        visited = 1;
    }
}

