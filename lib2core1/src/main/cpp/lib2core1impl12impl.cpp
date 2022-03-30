// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl12impl4(int a, int b) {
    return a + b;
}

int Lib2Core1Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl12Impl" << std::endl;
        Lib2Core1Impl12Core1 lib2core1impl12core1;
        lib2core1impl12core1.doSomething();
        Lib2Core1Impl12Core2 lib2core1impl12core2;
        lib2core1impl12core2.doSomething();
        Lib2Core1Impl13Api1 lib2core1impl13api1;
        lib2core1impl13api1.doSomething();
        Lib2Core1Impl13Api2 lib2core1impl13api2;
        lib2core1impl13api2.doSomething();
        Lib2Core1Impl13Api3 lib2core1impl13api3;
        lib2core1impl13api3.doSomething();
        visited = 1;
    }
}

