// GENERATED SOURCE FILE

#include "lib9api3_private.h"
#include "lib9api3_impl.h"
#include "lib9impl.h"
#include "lib10api1.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9api3impl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl20impl4(int a, int b) {
    return a + b;
}

int Lib9Api3Impl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api3Impl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api3Impl20Impl" << std::endl;
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api3Impl20Core1 lib9api3impl20core1;
        lib9api3impl20core1.doSomething();
        Lib9Api3Impl20Core2 lib9api3impl20core2;
        lib9api3impl20core2.doSomething();
        Lib9Api3Impl21Api1 lib9api3impl21api1;
        lib9api3impl21api1.doSomething();
        Lib9Api3Impl21Api2 lib9api3impl21api2;
        lib9api3impl21api2.doSomething();
        Lib9Api3Impl21Api3 lib9api3impl21api3;
        lib9api3impl21api3.doSomething();
        visited = 1;
    }
}

