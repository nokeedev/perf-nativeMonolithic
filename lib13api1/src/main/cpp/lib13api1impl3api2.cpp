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
int lib13api1impl3api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl3api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl3api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl3api24(int a, int b) {
    return a + b;
}

int Lib13Api1Impl3Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api1Impl3Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api1Impl3Api2" << std::endl;
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api1Impl3Impl lib13api1impl3impl;
        lib13api1impl3impl.doSomething();
        Lib13Api1Impl4Api1 lib13api1impl4api1;
        lib13api1impl4api1.doSomething();
        Lib13Api1Impl4Api2 lib13api1impl4api2;
        lib13api1impl4api2.doSomething();
        Lib13Api1Impl4Api3 lib13api1impl4api3;
        lib13api1impl4api3.doSomething();
        visited = 1;
    }
}

