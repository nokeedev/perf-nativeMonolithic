// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl7impl4(int a, int b) {
    return a + b;
}

int Lib10Core1Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl7Impl" << std::endl;
        Lib10Core1Impl7Core1 lib10core1impl7core1;
        lib10core1impl7core1.doSomething();
        Lib10Core1Impl7Core2 lib10core1impl7core2;
        lib10core1impl7core2.doSomething();
        Lib10Core1Impl8Api1 lib10core1impl8api1;
        lib10core1impl8api1.doSomething();
        Lib10Core1Impl8Api2 lib10core1impl8api2;
        lib10core1impl8api2.doSomething();
        Lib10Core1Impl8Api3 lib10core1impl8api3;
        lib10core1impl8api3.doSomething();
        visited = 1;
    }
}

