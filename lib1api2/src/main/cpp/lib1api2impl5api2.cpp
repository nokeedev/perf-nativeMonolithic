// GENERATED SOURCE FILE

#include "lib1api2_private.h"
#include "lib1api2_impl.h"
#include "lib1impl.h"
#include "lib2api1.h"
#include "lib2api2.h"
#include "lib2api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api2impl5api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl5api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl5api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl5api24(int a, int b) {
    return a + b;
}

int Lib1Api2Impl5Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api2Impl5Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api2Impl5Api2" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api2Impl5Impl lib1api2impl5impl;
        lib1api2impl5impl.doSomething();
        Lib1Api2Impl6Api1 lib1api2impl6api1;
        lib1api2impl6api1.doSomething();
        Lib1Api2Impl6Api2 lib1api2impl6api2;
        lib1api2impl6api2.doSomething();
        Lib1Api2Impl6Api3 lib1api2impl6api3;
        lib1api2impl6api3.doSomething();
        visited = 1;
    }
}

