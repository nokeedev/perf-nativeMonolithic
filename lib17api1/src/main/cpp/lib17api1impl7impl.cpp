// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl7impl4(int a, int b) {
    return a + b;
}

int Lib17Api1Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl7Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl7Core1 lib17api1impl7core1;
        lib17api1impl7core1.doSomething();
        Lib17Api1Impl7Core2 lib17api1impl7core2;
        lib17api1impl7core2.doSomething();
        Lib17Api1Impl8Api1 lib17api1impl8api1;
        lib17api1impl8api1.doSomething();
        Lib17Api1Impl8Api2 lib17api1impl8api2;
        lib17api1impl8api2.doSomething();
        Lib17Api1Impl8Api3 lib17api1impl8api3;
        lib17api1impl8api3.doSomething();
        visited = 1;
    }
}

