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
int lib13api1impl11impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl11impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl11impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl11impl4(int a, int b) {
    return a + b;
}

int Lib13Api1Impl11Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api1Impl11Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api1Impl11Impl" << std::endl;
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api1Impl11Core1 lib13api1impl11core1;
        lib13api1impl11core1.doSomething();
        Lib13Api1Impl11Core2 lib13api1impl11core2;
        lib13api1impl11core2.doSomething();
        Lib13Api1Impl12Api1 lib13api1impl12api1;
        lib13api1impl12api1.doSomething();
        Lib13Api1Impl12Api2 lib13api1impl12api2;
        lib13api1impl12api2.doSomething();
        Lib13Api1Impl12Api3 lib13api1impl12api3;
        lib13api1impl12api3.doSomething();
        visited = 1;
    }
}

