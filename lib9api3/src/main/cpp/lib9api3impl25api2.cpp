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
int lib9api3impl25api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl25api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl25api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl25api24(int a, int b) {
    return a + b;
}

int Lib9Api3Impl25Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api3Impl25Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api3Impl25Api2" << std::endl;
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api3Impl25Impl lib9api3impl25impl;
        lib9api3impl25impl.doSomething();
        Lib9Api3Impl26Api1 lib9api3impl26api1;
        lib9api3impl26api1.doSomething();
        Lib9Api3Impl26Api2 lib9api3impl26api2;
        lib9api3impl26api2.doSomething();
        Lib9Api3Impl26Api3 lib9api3impl26api3;
        lib9api3impl26api3.doSomething();
        visited = 1;
    }
}

