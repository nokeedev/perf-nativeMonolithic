// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl4impl4(int a, int b) {
    return a + b;
}

int Lib8Core1Impl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl4Impl" << std::endl;
        Lib8Core1Impl4Core1 lib8core1impl4core1;
        lib8core1impl4core1.doSomething();
        Lib8Core1Impl4Core2 lib8core1impl4core2;
        lib8core1impl4core2.doSomething();
        Lib8Core1Impl5Api1 lib8core1impl5api1;
        lib8core1impl5api1.doSomething();
        Lib8Core1Impl5Api2 lib8core1impl5api2;
        lib8core1impl5api2.doSomething();
        Lib8Core1Impl5Api3 lib8core1impl5api3;
        lib8core1impl5api3.doSomething();
        visited = 1;
    }
}

