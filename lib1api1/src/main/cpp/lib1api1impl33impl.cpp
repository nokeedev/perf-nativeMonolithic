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
int lib1api1impl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl33impl4(int a, int b) {
    return a + b;
}

int Lib1Api1Impl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api1Impl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api1Impl33Impl" << std::endl;
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api1Impl33Core lib1api1impl33core;
        lib1api1impl33core.doSomething();
        Lib1Api1Impl34Api lib1api1impl34api;
        lib1api1impl34api.doSomething();
        visited = 1;
    }
}

