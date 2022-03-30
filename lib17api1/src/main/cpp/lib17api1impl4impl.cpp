// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl4impl4(int a, int b) {
    return a + b;
}

int Lib17Api1Impl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl4Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl4Core1 lib17api1impl4core1;
        lib17api1impl4core1.doSomething();
        Lib17Api1Impl4Core2 lib17api1impl4core2;
        lib17api1impl4core2.doSomething();
        Lib17Api1Impl5Api1 lib17api1impl5api1;
        lib17api1impl5api1.doSomething();
        Lib17Api1Impl5Api2 lib17api1impl5api2;
        lib17api1impl5api2.doSomething();
        Lib17Api1Impl5Api3 lib17api1impl5api3;
        lib17api1impl5api3.doSomething();
        visited = 1;
    }
}

