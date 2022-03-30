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
int lib11api1impl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl32impl4(int a, int b) {
    return a + b;
}

int Lib11Api1Impl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api1Impl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api1Impl32Impl" << std::endl;
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api1Impl32Core1 lib11api1impl32core1;
        lib11api1impl32core1.doSomething();
        Lib11Api1Impl32Core2 lib11api1impl32core2;
        lib11api1impl32core2.doSomething();
        Lib11Api1Impl33Api1 lib11api1impl33api1;
        lib11api1impl33api1.doSomething();
        Lib11Api1Impl33Api2 lib11api1impl33api2;
        lib11api1impl33api2.doSomething();
        Lib11Api1Impl33Api3 lib11api1impl33api3;
        lib11api1impl33api3.doSomething();
        visited = 1;
    }
}

