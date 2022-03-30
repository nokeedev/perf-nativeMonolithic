// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl4impl4(int a, int b) {
    return a + b;
}

int Lib15Core1Impl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl4Impl" << std::endl;
        Lib15Core1Impl4Core1 lib15core1impl4core1;
        lib15core1impl4core1.doSomething();
        Lib15Core1Impl4Core2 lib15core1impl4core2;
        lib15core1impl4core2.doSomething();
        Lib15Core1Impl5Api1 lib15core1impl5api1;
        lib15core1impl5api1.doSomething();
        Lib15Core1Impl5Api2 lib15core1impl5api2;
        lib15core1impl5api2.doSomething();
        Lib15Core1Impl5Api3 lib15core1impl5api3;
        lib15core1impl5api3.doSomething();
        visited = 1;
    }
}

