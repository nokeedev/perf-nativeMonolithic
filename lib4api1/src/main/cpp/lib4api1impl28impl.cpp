// GENERATED SOURCE FILE

#include "lib4api1_private.h"
#include "lib4api1_impl.h"
#include "lib5api1.h"
#include "lib4impl.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api1impl28impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl28impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl28impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl28impl4(int a, int b) {
    return a + b;
}

int Lib4Api1Impl28Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl28Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl28Impl" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl28Core1 lib4api1impl28core1;
        lib4api1impl28core1.doSomething();
        Lib4Api1Impl28Core2 lib4api1impl28core2;
        lib4api1impl28core2.doSomething();
        Lib4Api1Impl29Api1 lib4api1impl29api1;
        lib4api1impl29api1.doSomething();
        Lib4Api1Impl29Api2 lib4api1impl29api2;
        lib4api1impl29api2.doSomething();
        Lib4Api1Impl29Api3 lib4api1impl29api3;
        lib4api1impl29api3.doSomething();
        visited = 1;
    }
}

