// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl5impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl5impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl5impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl5impl4(int a, int b) {
    return a + b;
}

int Lib17Api1Impl5Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl5Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl5Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl5Core1 lib17api1impl5core1;
        lib17api1impl5core1.doSomething();
        Lib17Api1Impl5Core2 lib17api1impl5core2;
        lib17api1impl5core2.doSomething();
        Lib17Api1Impl6Api1 lib17api1impl6api1;
        lib17api1impl6api1.doSomething();
        Lib17Api1Impl6Api2 lib17api1impl6api2;
        lib17api1impl6api2.doSomething();
        Lib17Api1Impl6Api3 lib17api1impl6api3;
        lib17api1impl6api3.doSomething();
        visited = 1;
    }
}

