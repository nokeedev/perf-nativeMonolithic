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
int lib1api2impl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl16api24(int a, int b) {
    return a + b;
}

int Lib1Api2Impl16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api2Impl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api2Impl16Api2" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api2Impl16Impl lib1api2impl16impl;
        lib1api2impl16impl.doSomething();
        Lib1Api2Impl17Api1 lib1api2impl17api1;
        lib1api2impl17api1.doSomething();
        Lib1Api2Impl17Api2 lib1api2impl17api2;
        lib1api2impl17api2.doSomething();
        Lib1Api2Impl17Api3 lib1api2impl17api3;
        lib1api2impl17api3.doSomething();
        visited = 1;
    }
}

