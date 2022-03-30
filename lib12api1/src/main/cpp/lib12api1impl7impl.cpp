// GENERATED SOURCE FILE

#include "lib12api1_private.h"
#include "lib12api1_impl.h"
#include "lib13api1.h"
#include "lib12impl.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api1impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl7impl4(int a, int b) {
    return a + b;
}

int Lib12Api1Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api1Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api1Impl7Impl" << std::endl;
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api1Impl7Core1 lib12api1impl7core1;
        lib12api1impl7core1.doSomething();
        Lib12Api1Impl7Core2 lib12api1impl7core2;
        lib12api1impl7core2.doSomething();
        Lib12Api1Impl8Api1 lib12api1impl8api1;
        lib12api1impl8api1.doSomething();
        Lib12Api1Impl8Api2 lib12api1impl8api2;
        lib12api1impl8api2.doSomething();
        Lib12Api1Impl8Api3 lib12api1impl8api3;
        lib12api1impl8api3.doSomething();
        visited = 1;
    }
}

