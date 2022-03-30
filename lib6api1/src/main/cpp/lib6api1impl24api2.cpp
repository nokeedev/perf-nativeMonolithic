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
int lib6api1impl24api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl24api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl24api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl24api24(int a, int b) {
    return a + b;
}

int Lib6Api1Impl24Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1Impl24Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1Impl24Api2" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api1Impl24Impl lib6api1impl24impl;
        lib6api1impl24impl.doSomething();
        Lib6Api1Impl25Api1 lib6api1impl25api1;
        lib6api1impl25api1.doSomething();
        Lib6Api1Impl25Api2 lib6api1impl25api2;
        lib6api1impl25api2.doSomething();
        Lib6Api1Impl25Api3 lib6api1impl25api3;
        lib6api1impl25api3.doSomething();
        visited = 1;
    }
}

