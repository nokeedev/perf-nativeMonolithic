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
int lib9api1impl29impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl29impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl29impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl29impl4(int a, int b) {
    return a + b;
}

int Lib9Api1Impl29Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api1Impl29Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api1Impl29Impl" << std::endl;
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api1Impl29Core1 lib9api1impl29core1;
        lib9api1impl29core1.doSomething();
        Lib9Api1Impl29Core2 lib9api1impl29core2;
        lib9api1impl29core2.doSomething();
        Lib9Api1Impl30Api1 lib9api1impl30api1;
        lib9api1impl30api1.doSomething();
        Lib9Api1Impl30Api2 lib9api1impl30api2;
        lib9api1impl30api2.doSomething();
        Lib9Api1Impl30Api3 lib9api1impl30api3;
        lib9api1impl30api3.doSomething();
        visited = 1;
    }
}

