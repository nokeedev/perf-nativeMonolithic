// GENERATED SOURCE FILE

#include "lib9api1_private.h"
#include "lib9api1_impl.h"
#include "lib10api1.h"
#include "lib9impl.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9api1impl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl16impl4(int a, int b) {
    return a + b;
}

int Lib9Api1Impl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api1Impl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api1Impl16Impl" << std::endl;
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api1Impl16Core1 lib9api1impl16core1;
        lib9api1impl16core1.doSomething();
        Lib9Api1Impl16Core2 lib9api1impl16core2;
        lib9api1impl16core2.doSomething();
        Lib9Api1Impl17Api1 lib9api1impl17api1;
        lib9api1impl17api1.doSomething();
        Lib9Api1Impl17Api2 lib9api1impl17api2;
        lib9api1impl17api2.doSomething();
        Lib9Api1Impl17Api3 lib9api1impl17api3;
        lib9api1impl17api3.doSomething();
        visited = 1;
    }
}

