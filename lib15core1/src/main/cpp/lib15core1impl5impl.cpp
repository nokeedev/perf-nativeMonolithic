// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl5impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl5impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl5impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl5impl4(int a, int b) {
    return a + b;
}

int Lib15Core1Impl5Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl5Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl5Impl" << std::endl;
        Lib15Core1Impl5Core1 lib15core1impl5core1;
        lib15core1impl5core1.doSomething();
        Lib15Core1Impl5Core2 lib15core1impl5core2;
        lib15core1impl5core2.doSomething();
        Lib15Core1Impl6Api1 lib15core1impl6api1;
        lib15core1impl6api1.doSomething();
        Lib15Core1Impl6Api2 lib15core1impl6api2;
        lib15core1impl6api2.doSomething();
        Lib15Core1Impl6Api3 lib15core1impl6api3;
        lib15core1impl6api3.doSomething();
        visited = 1;
    }
}

