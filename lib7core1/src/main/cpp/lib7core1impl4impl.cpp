// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl4impl4(int a, int b) {
    return a + b;
}

int Lib7Core1Impl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl4Impl" << std::endl;
        Lib7Core1Impl4Core1 lib7core1impl4core1;
        lib7core1impl4core1.doSomething();
        Lib7Core1Impl4Core2 lib7core1impl4core2;
        lib7core1impl4core2.doSomething();
        Lib7Core1Impl5Api1 lib7core1impl5api1;
        lib7core1impl5api1.doSomething();
        Lib7Core1Impl5Api2 lib7core1impl5api2;
        lib7core1impl5api2.doSomething();
        Lib7Core1Impl5Api3 lib7core1impl5api3;
        lib7core1impl5api3.doSomething();
        visited = 1;
    }
}

