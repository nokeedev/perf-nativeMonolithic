// GENERATED SOURCE FILE

#include "lib6api1_private.h"
#include "lib6api1_impl.h"
#include "lib7api1.h"
#include "lib6impl.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api1impl9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl9impl4(int a, int b) {
    return a + b;
}

int Lib6Api1Impl9Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1Impl9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1Impl9Impl" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api1Impl9Core1 lib6api1impl9core1;
        lib6api1impl9core1.doSomething();
        Lib6Api1Impl9Core2 lib6api1impl9core2;
        lib6api1impl9core2.doSomething();
        Lib6Api1Impl10Api1 lib6api1impl10api1;
        lib6api1impl10api1.doSomething();
        Lib6Api1Impl10Api2 lib6api1impl10api2;
        lib6api1impl10api2.doSomething();
        Lib6Api1Impl10Api3 lib6api1impl10api3;
        lib6api1impl10api3.doSomething();
        visited = 1;
    }
}

