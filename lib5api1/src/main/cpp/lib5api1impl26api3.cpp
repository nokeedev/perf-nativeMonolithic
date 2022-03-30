// GENERATED SOURCE FILE

#include "lib5api1_private.h"
#include "lib5api1_impl.h"
#include "lib6api1.h"
#include "lib5impl.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api1impl26api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl26api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl26api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl26api34(int a, int b) {
    return a + b;
}

int Lib5Api1Impl26Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api1Impl26Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api1Impl26Api3" << std::endl;
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api1Impl26Impl lib5api1impl26impl;
        lib5api1impl26impl.doSomething();
        Lib5Api1Impl27Api1 lib5api1impl27api1;
        lib5api1impl27api1.doSomething();
        Lib5Api1Impl27Api2 lib5api1impl27api2;
        lib5api1impl27api2.doSomething();
        Lib5Api1Impl27Api3 lib5api1impl27api3;
        lib5api1impl27api3.doSomething();
        visited = 1;
    }
}

