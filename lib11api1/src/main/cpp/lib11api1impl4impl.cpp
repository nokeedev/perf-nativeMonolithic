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
int lib11api1impl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl4impl4(int a, int b) {
    return a + b;
}

int Lib11Api1Impl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api1Impl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api1Impl4Impl" << std::endl;
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api1Impl4Core1 lib11api1impl4core1;
        lib11api1impl4core1.doSomething();
        Lib11Api1Impl4Core2 lib11api1impl4core2;
        lib11api1impl4core2.doSomething();
        Lib11Api1Impl5Api1 lib11api1impl5api1;
        lib11api1impl5api1.doSomething();
        Lib11Api1Impl5Api2 lib11api1impl5api2;
        lib11api1impl5api2.doSomething();
        Lib11Api1Impl5Api3 lib11api1impl5api3;
        lib11api1impl5api3.doSomething();
        visited = 1;
    }
}
