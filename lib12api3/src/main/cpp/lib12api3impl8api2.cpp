// GENERATED SOURCE FILE

#include "lib12api3_private.h"
#include "lib12api3_impl.h"
#include "lib12impl.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api3impl8api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl8api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl8api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl8api24(int a, int b) {
    return a + b;
}

int Lib12Api3Impl8Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api3Impl8Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api3Impl8Api2" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api3Impl8Impl lib12api3impl8impl;
        lib12api3impl8impl.doSomething();
        Lib12Api3Impl9Api1 lib12api3impl9api1;
        lib12api3impl9api1.doSomething();
        Lib12Api3Impl9Api2 lib12api3impl9api2;
        lib12api3impl9api2.doSomething();
        Lib12Api3Impl9Api3 lib12api3impl9api3;
        lib12api3impl9api3.doSomething();
        visited = 1;
    }
}

