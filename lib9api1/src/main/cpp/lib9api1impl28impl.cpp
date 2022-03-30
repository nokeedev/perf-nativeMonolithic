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
int lib9api1impl28impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl28impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl28impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl28impl4(int a, int b) {
    return a + b;
}

int Lib9Api1Impl28Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api1Impl28Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api1Impl28Impl" << std::endl;
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api1Impl28Core1 lib9api1impl28core1;
        lib9api1impl28core1.doSomething();
        Lib9Api1Impl28Core2 lib9api1impl28core2;
        lib9api1impl28core2.doSomething();
        Lib9Api1Impl29Api1 lib9api1impl29api1;
        lib9api1impl29api1.doSomething();
        Lib9Api1Impl29Api2 lib9api1impl29api2;
        lib9api1impl29api2.doSomething();
        Lib9Api1Impl29Api3 lib9api1impl29api3;
        lib9api1impl29api3.doSomething();
        visited = 1;
    }
}

