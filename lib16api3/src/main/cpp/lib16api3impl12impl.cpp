// GENERATED SOURCE FILE

#include "lib16api3_private.h"
#include "lib16api3_impl.h"
#include "lib16impl.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api3impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl12impl4(int a, int b) {
    return a + b;
}

int Lib16Api3Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3Impl12Impl" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api3Impl12Core1 lib16api3impl12core1;
        lib16api3impl12core1.doSomething();
        Lib16Api3Impl12Core2 lib16api3impl12core2;
        lib16api3impl12core2.doSomething();
        Lib16Api3Impl13Api1 lib16api3impl13api1;
        lib16api3impl13api1.doSomething();
        Lib16Api3Impl13Api2 lib16api3impl13api2;
        lib16api3impl13api2.doSomething();
        Lib16Api3Impl13Api3 lib16api3impl13api3;
        lib16api3impl13api3.doSomething();
        visited = 1;
    }
}
