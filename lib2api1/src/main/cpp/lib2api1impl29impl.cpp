// GENERATED SOURCE FILE

#include "lib2api1_private.h"
#include "lib2api1_impl.h"
#include "lib3api1.h"
#include "lib2impl.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api1impl29impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl29impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl29impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl29impl4(int a, int b) {
    return a + b;
}

int Lib2Api1Impl29Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api1Impl29Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api1Impl29Impl" << std::endl;
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api1Impl29Core1 lib2api1impl29core1;
        lib2api1impl29core1.doSomething();
        Lib2Api1Impl29Core2 lib2api1impl29core2;
        lib2api1impl29core2.doSomething();
        Lib2Api1Impl30Api1 lib2api1impl30api1;
        lib2api1impl30api1.doSomething();
        Lib2Api1Impl30Api2 lib2api1impl30api2;
        lib2api1impl30api2.doSomething();
        Lib2Api1Impl30Api3 lib2api1impl30api3;
        lib2api1impl30api3.doSomething();
        visited = 1;
    }
}

