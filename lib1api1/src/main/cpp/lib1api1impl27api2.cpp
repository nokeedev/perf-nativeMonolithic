// GENERATED SOURCE FILE

#include "lib1api1_private.h"
#include "lib1api1_impl.h"
#include "lib2api1.h"
#include "lib1impl.h"
#include "lib2api2.h"
#include "lib2api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api1impl27api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl27api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl27api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl27api24(int a, int b) {
    return a + b;
}

int Lib1Api1Impl27Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api1Impl27Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api1Impl27Api2" << std::endl;
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api1Impl27Impl lib1api1impl27impl;
        lib1api1impl27impl.doSomething();
        Lib1Api1Impl28Api1 lib1api1impl28api1;
        lib1api1impl28api1.doSomething();
        Lib1Api1Impl28Api2 lib1api1impl28api2;
        lib1api1impl28api2.doSomething();
        Lib1Api1Impl28Api3 lib1api1impl28api3;
        lib1api1impl28api3.doSomething();
        visited = 1;
    }
}

