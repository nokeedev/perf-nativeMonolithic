// GENERATED SOURCE FILE

#include "lib12api3_private.h"
#include "lib12api3_impl.h"
#include "lib12impl.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api3impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl12impl4(int a, int b) {
    return a + b;
}

int Lib12Api3Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api3Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api3Impl12Impl" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api3Impl12Core1 lib12api3impl12core1;
        lib12api3impl12core1.doSomething();
        Lib12Api3Impl12Core2 lib12api3impl12core2;
        lib12api3impl12core2.doSomething();
        Lib12Api3Impl13Api1 lib12api3impl13api1;
        lib12api3impl13api1.doSomething();
        Lib12Api3Impl13Api2 lib12api3impl13api2;
        lib12api3impl13api2.doSomething();
        Lib12Api3Impl13Api3 lib12api3impl13api3;
        lib12api3impl13api3.doSomething();
        visited = 1;
    }
}

