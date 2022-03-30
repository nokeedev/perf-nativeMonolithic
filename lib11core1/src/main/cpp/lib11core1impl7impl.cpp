// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl7impl4(int a, int b) {
    return a + b;
}

int Lib11Core1Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl7Impl" << std::endl;
        Lib11Core1Impl7Core1 lib11core1impl7core1;
        lib11core1impl7core1.doSomething();
        Lib11Core1Impl7Core2 lib11core1impl7core2;
        lib11core1impl7core2.doSomething();
        Lib11Core1Impl8Api1 lib11core1impl8api1;
        lib11core1impl8api1.doSomething();
        Lib11Core1Impl8Api2 lib11core1impl8api2;
        lib11core1impl8api2.doSomething();
        Lib11Core1Impl8Api3 lib11core1impl8api3;
        lib11core1impl8api3.doSomething();
        visited = 1;
    }
}

