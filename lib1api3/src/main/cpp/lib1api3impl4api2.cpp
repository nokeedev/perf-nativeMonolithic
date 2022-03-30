// GENERATED SOURCE FILE

#include "lib1api3_private.h"
#include "lib1api3_impl.h"
#include "lib1impl.h"
#include "lib2api1.h"
#include "lib2api2.h"
#include "lib2api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api3impl4api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl4api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl4api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl4api24(int a, int b) {
    return a + b;
}

int Lib1Api3Impl4Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl4Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl4Api2" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api3Impl4Impl lib1api3impl4impl;
        lib1api3impl4impl.doSomething();
        Lib1Api3Impl5Api1 lib1api3impl5api1;
        lib1api3impl5api1.doSomething();
        Lib1Api3Impl5Api2 lib1api3impl5api2;
        lib1api3impl5api2.doSomething();
        Lib1Api3Impl5Api3 lib1api3impl5api3;
        lib1api3impl5api3.doSomething();
        visited = 1;
    }
}

