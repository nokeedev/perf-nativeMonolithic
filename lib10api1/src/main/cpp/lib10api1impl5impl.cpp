// GENERATED SOURCE FILE

#include "lib10api1_private.h"
#include "lib10api1_impl.h"
#include "lib11api1.h"
#include "lib10impl.h"
#include "lib11api2.h"
#include "lib11api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api1impl5impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api1impl5impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api1impl5impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api1impl5impl4(int a, int b) {
    return a + b;
}

int Lib10Api1Impl5Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api1Impl5Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api1Impl5Impl" << std::endl;
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api1Impl5Core1 lib10api1impl5core1;
        lib10api1impl5core1.doSomething();
        Lib10Api1Impl5Core2 lib10api1impl5core2;
        lib10api1impl5core2.doSomething();
        Lib10Api1Impl6Api1 lib10api1impl6api1;
        lib10api1impl6api1.doSomething();
        Lib10Api1Impl6Api2 lib10api1impl6api2;
        lib10api1impl6api2.doSomething();
        Lib10Api1Impl6Api3 lib10api1impl6api3;
        lib10api1impl6api3.doSomething();
        visited = 1;
    }
}

