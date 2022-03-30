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
int lib9api3impl26impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl26impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl26impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl26impl4(int a, int b) {
    return a + b;
}

int Lib9Api3Impl26Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api3Impl26Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api3Impl26Impl" << std::endl;
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api3Impl26Core1 lib9api3impl26core1;
        lib9api3impl26core1.doSomething();
        Lib9Api3Impl26Core2 lib9api3impl26core2;
        lib9api3impl26core2.doSomething();
        Lib9Api3Impl27Api1 lib9api3impl27api1;
        lib9api3impl27api1.doSomething();
        Lib9Api3Impl27Api2 lib9api3impl27api2;
        lib9api3impl27api2.doSomething();
        Lib9Api3Impl27Api3 lib9api3impl27api3;
        lib9api3impl27api3.doSomething();
        visited = 1;
    }
}

