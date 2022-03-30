// GENERATED SOURCE FILE

#include "lib9api1_private.h"
#include "lib9api1_impl.h"
#include "lib10api1.h"
#include "lib9impl.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9api1impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl34api4(int a, int b) {
    return a + b;
}

int Lib9Api1Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api1Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api1Impl34Api" << std::endl;
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api1Impl34Core lib9api1impl34core;
        lib9api1impl34core.doSomething();
        visited = 1;
    }
}

