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
int lib6api1impl25api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl25api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl25api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl25api34(int a, int b) {
    return a + b;
}

int Lib6Api1Impl25Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1Impl25Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1Impl25Api3" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api1Impl25Impl lib6api1impl25impl;
        lib6api1impl25impl.doSomething();
        Lib6Api1Impl26Api1 lib6api1impl26api1;
        lib6api1impl26api1.doSomething();
        Lib6Api1Impl26Api2 lib6api1impl26api2;
        lib6api1impl26api2.doSomething();
        Lib6Api1Impl26Api3 lib6api1impl26api3;
        lib6api1impl26api3.doSomething();
        visited = 1;
    }
}

