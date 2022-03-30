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
int lib6api1impl5api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl5api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl5api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl5api14(int a, int b) {
    return a + b;
}

int Lib6Api1Impl5Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1Impl5Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1Impl5Api1" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api1Impl6Api1 lib6api1impl6api1;
        lib6api1impl6api1.doSomething();
        Lib6Api1Impl5Impl lib6api1impl5impl;
        lib6api1impl5impl.doSomething();
        Lib6Api1Impl6Api2 lib6api1impl6api2;
        lib6api1impl6api2.doSomething();
        Lib6Api1Impl6Api3 lib6api1impl6api3;
        lib6api1impl6api3.doSomething();
        visited = 1;
    }
}

