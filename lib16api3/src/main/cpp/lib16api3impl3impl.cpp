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
int lib16api3impl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl3impl4(int a, int b) {
    return a + b;
}

int Lib16Api3Impl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3Impl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3Impl3Impl" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api3Impl3Core1 lib16api3impl3core1;
        lib16api3impl3core1.doSomething();
        Lib16Api3Impl3Core2 lib16api3impl3core2;
        lib16api3impl3core2.doSomething();
        Lib16Api3Impl4Api1 lib16api3impl4api1;
        lib16api3impl4api1.doSomething();
        Lib16Api3Impl4Api2 lib16api3impl4api2;
        lib16api3impl4api2.doSomething();
        Lib16Api3Impl4Api3 lib16api3impl4api3;
        lib16api3impl4api3.doSomething();
        visited = 1;
    }
}

