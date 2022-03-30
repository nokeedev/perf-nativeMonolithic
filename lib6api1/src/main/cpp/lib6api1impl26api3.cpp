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
int lib6api1impl26api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl26api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl26api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl26api34(int a, int b) {
    return a + b;
}

int Lib6Api1Impl26Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1Impl26Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1Impl26Api3" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api1Impl26Impl lib6api1impl26impl;
        lib6api1impl26impl.doSomething();
        Lib6Api1Impl27Api1 lib6api1impl27api1;
        lib6api1impl27api1.doSomething();
        Lib6Api1Impl27Api2 lib6api1impl27api2;
        lib6api1impl27api2.doSomething();
        Lib6Api1Impl27Api3 lib6api1impl27api3;
        lib6api1impl27api3.doSomething();
        visited = 1;
    }
}

