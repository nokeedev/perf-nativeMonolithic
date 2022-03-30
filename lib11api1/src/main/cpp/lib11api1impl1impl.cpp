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
int lib11api1impl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl1impl4(int a, int b) {
    return a + b;
}

int Lib11Api1Impl1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api1Impl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api1Impl1Impl" << std::endl;
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api1Impl1Core1 lib11api1impl1core1;
        lib11api1impl1core1.doSomething();
        Lib11Api1Impl1Core2 lib11api1impl1core2;
        lib11api1impl1core2.doSomething();
        Lib11Api1Impl2Api1 lib11api1impl2api1;
        lib11api1impl2api1.doSomething();
        Lib11Api1Impl2Api2 lib11api1impl2api2;
        lib11api1impl2api2.doSomething();
        Lib11Api1Impl2Api3 lib11api1impl2api3;
        lib11api1impl2api3.doSomething();
        visited = 1;
    }
}

