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
int lib1api3impl26api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl26api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl26api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl26api24(int a, int b) {
    return a + b;
}

int Lib1Api3Impl26Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl26Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl26Api2" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api3Impl26Impl lib1api3impl26impl;
        lib1api3impl26impl.doSomething();
        Lib1Api3Impl27Api1 lib1api3impl27api1;
        lib1api3impl27api1.doSomething();
        Lib1Api3Impl27Api2 lib1api3impl27api2;
        lib1api3impl27api2.doSomething();
        Lib1Api3Impl27Api3 lib1api3impl27api3;
        lib1api3impl27api3.doSomething();
        visited = 1;
    }
}

