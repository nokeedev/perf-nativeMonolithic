// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl12impl4(int a, int b) {
    return a + b;
}

int Lib17Api1Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl12Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl12Core1 lib17api1impl12core1;
        lib17api1impl12core1.doSomething();
        Lib17Api1Impl12Core2 lib17api1impl12core2;
        lib17api1impl12core2.doSomething();
        Lib17Api1Impl13Api1 lib17api1impl13api1;
        lib17api1impl13api1.doSomething();
        Lib17Api1Impl13Api2 lib17api1impl13api2;
        lib17api1impl13api2.doSomething();
        Lib17Api1Impl13Api3 lib17api1impl13api3;
        lib17api1impl13api3.doSomething();
        visited = 1;
    }
}

