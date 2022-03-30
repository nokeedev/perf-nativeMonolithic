// GENERATED SOURCE FILE

#include "lib11api1_private.h"
#include "lib11api1_impl.h"
#include "lib12api1.h"
#include "lib11impl.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api1impl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl14impl4(int a, int b) {
    return a + b;
}

int Lib11Api1Impl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api1Impl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api1Impl14Impl" << std::endl;
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api1Impl14Core1 lib11api1impl14core1;
        lib11api1impl14core1.doSomething();
        Lib11Api1Impl14Core2 lib11api1impl14core2;
        lib11api1impl14core2.doSomething();
        Lib11Api1Impl15Api1 lib11api1impl15api1;
        lib11api1impl15api1.doSomething();
        Lib11Api1Impl15Api2 lib11api1impl15api2;
        lib11api1impl15api2.doSomething();
        Lib11Api1Impl15Api3 lib11api1impl15api3;
        lib11api1impl15api3.doSomething();
        visited = 1;
    }
}

