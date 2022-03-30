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
int lib12api1impl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl25impl4(int a, int b) {
    return a + b;
}

int Lib12Api1Impl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api1Impl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api1Impl25Impl" << std::endl;
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api1Impl25Core1 lib12api1impl25core1;
        lib12api1impl25core1.doSomething();
        Lib12Api1Impl25Core2 lib12api1impl25core2;
        lib12api1impl25core2.doSomething();
        Lib12Api1Impl26Api1 lib12api1impl26api1;
        lib12api1impl26api1.doSomething();
        Lib12Api1Impl26Api2 lib12api1impl26api2;
        lib12api1impl26api2.doSomething();
        Lib12Api1Impl26Api3 lib12api1impl26api3;
        lib12api1impl26api3.doSomething();
        visited = 1;
    }
}

