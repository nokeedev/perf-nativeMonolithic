// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl1impl4(int a, int b) {
    return a + b;
}

int Lib17Api1Impl1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl1Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl1Core1 lib17api1impl1core1;
        lib17api1impl1core1.doSomething();
        Lib17Api1Impl1Core2 lib17api1impl1core2;
        lib17api1impl1core2.doSomething();
        Lib17Api1Impl2Api1 lib17api1impl2api1;
        lib17api1impl2api1.doSomething();
        Lib17Api1Impl2Api2 lib17api1impl2api2;
        lib17api1impl2api2.doSomething();
        Lib17Api1Impl2Api3 lib17api1impl2api3;
        lib17api1impl2api3.doSomething();
        visited = 1;
    }
}

