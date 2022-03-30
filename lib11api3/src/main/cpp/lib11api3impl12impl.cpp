// GENERATED SOURCE FILE

#include "lib11api3_private.h"
#include "lib11api3_impl.h"
#include "lib11impl.h"
#include "lib12api1.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api3impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl12impl4(int a, int b) {
    return a + b;
}

int Lib11Api3Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api3Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api3Impl12Impl" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api3Impl12Core1 lib11api3impl12core1;
        lib11api3impl12core1.doSomething();
        Lib11Api3Impl12Core2 lib11api3impl12core2;
        lib11api3impl12core2.doSomething();
        Lib11Api3Impl13Api1 lib11api3impl13api1;
        lib11api3impl13api1.doSomething();
        Lib11Api3Impl13Api2 lib11api3impl13api2;
        lib11api3impl13api2.doSomething();
        Lib11Api3Impl13Api3 lib11api3impl13api3;
        lib11api3impl13api3.doSomething();
        visited = 1;
    }
}

