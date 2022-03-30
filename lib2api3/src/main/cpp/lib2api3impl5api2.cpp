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
int lib2api3impl5api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl5api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl5api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl5api24(int a, int b) {
    return a + b;
}

int Lib2Api3Impl5Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api3Impl5Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api3Impl5Api2" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api3Impl5Impl lib2api3impl5impl;
        lib2api3impl5impl.doSomething();
        Lib2Api3Impl6Api1 lib2api3impl6api1;
        lib2api3impl6api1.doSomething();
        Lib2Api3Impl6Api2 lib2api3impl6api2;
        lib2api3impl6api2.doSomething();
        Lib2Api3Impl6Api3 lib2api3impl6api3;
        lib2api3impl6api3.doSomething();
        visited = 1;
    }
}

