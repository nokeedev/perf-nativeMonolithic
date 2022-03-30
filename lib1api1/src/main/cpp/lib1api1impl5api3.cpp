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
int lib1api1impl5api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl5api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl5api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl5api34(int a, int b) {
    return a + b;
}

int Lib1Api1Impl5Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api1Impl5Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api1Impl5Api3" << std::endl;
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api1Impl5Impl lib1api1impl5impl;
        lib1api1impl5impl.doSomething();
        Lib1Api1Impl6Api1 lib1api1impl6api1;
        lib1api1impl6api1.doSomething();
        Lib1Api1Impl6Api2 lib1api1impl6api2;
        lib1api1impl6api2.doSomething();
        Lib1Api1Impl6Api3 lib1api1impl6api3;
        lib1api1impl6api3.doSomething();
        visited = 1;
    }
}

