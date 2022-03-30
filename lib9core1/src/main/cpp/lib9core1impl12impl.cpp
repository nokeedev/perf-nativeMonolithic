// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl12impl4(int a, int b) {
    return a + b;
}

int Lib9Core1Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl12Impl" << std::endl;
        Lib9Core1Impl12Core1 lib9core1impl12core1;
        lib9core1impl12core1.doSomething();
        Lib9Core1Impl12Core2 lib9core1impl12core2;
        lib9core1impl12core2.doSomething();
        Lib9Core1Impl13Api1 lib9core1impl13api1;
        lib9core1impl13api1.doSomething();
        Lib9Core1Impl13Api2 lib9core1impl13api2;
        lib9core1impl13api2.doSomething();
        Lib9Core1Impl13Api3 lib9core1impl13api3;
        lib9core1impl13api3.doSomething();
        visited = 1;
    }
}

