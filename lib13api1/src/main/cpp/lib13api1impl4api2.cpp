// GENERATED SOURCE FILE

#include "lib13api1_private.h"
#include "lib13api1_impl.h"
#include "lib14api1.h"
#include "lib13impl.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api1impl4api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl4api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl4api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl4api24(int a, int b) {
    return a + b;
}

int Lib13Api1Impl4Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api1Impl4Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api1Impl4Api2" << std::endl;
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api1Impl4Impl lib13api1impl4impl;
        lib13api1impl4impl.doSomething();
        Lib13Api1Impl5Api1 lib13api1impl5api1;
        lib13api1impl5api1.doSomething();
        Lib13Api1Impl5Api2 lib13api1impl5api2;
        lib13api1impl5api2.doSomething();
        Lib13Api1Impl5Api3 lib13api1impl5api3;
        lib13api1impl5api3.doSomething();
        visited = 1;
    }
}

