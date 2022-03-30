// GENERATED SOURCE FILE

#include "lib12api1_private.h"
#include "lib12api1_impl.h"
#include "lib13api1.h"
#include "lib12impl.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api1impl28impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl28impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl28impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl28impl4(int a, int b) {
    return a + b;
}

int Lib12Api1Impl28Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api1Impl28Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api1Impl28Impl" << std::endl;
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api1Impl28Core1 lib12api1impl28core1;
        lib12api1impl28core1.doSomething();
        Lib12Api1Impl28Core2 lib12api1impl28core2;
        lib12api1impl28core2.doSomething();
        Lib12Api1Impl29Api1 lib12api1impl29api1;
        lib12api1impl29api1.doSomething();
        Lib12Api1Impl29Api2 lib12api1impl29api2;
        lib12api1impl29api2.doSomething();
        Lib12Api1Impl29Api3 lib12api1impl29api3;
        lib12api1impl29api3.doSomething();
        visited = 1;
    }
}

