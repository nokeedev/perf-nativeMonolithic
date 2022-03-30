// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl3impl4(int a, int b) {
    return a + b;
}

int Lib17Api1Impl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl3Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl3Core1 lib17api1impl3core1;
        lib17api1impl3core1.doSomething();
        Lib17Api1Impl3Core2 lib17api1impl3core2;
        lib17api1impl3core2.doSomething();
        Lib17Api1Impl4Api1 lib17api1impl4api1;
        lib17api1impl4api1.doSomething();
        Lib17Api1Impl4Api2 lib17api1impl4api2;
        lib17api1impl4api2.doSomething();
        Lib17Api1Impl4Api3 lib17api1impl4api3;
        lib17api1impl4api3.doSomething();
        visited = 1;
    }
}

