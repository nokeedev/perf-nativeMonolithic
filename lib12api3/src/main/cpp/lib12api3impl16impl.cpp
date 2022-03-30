// GENERATED SOURCE FILE

#include "lib12api3_private.h"
#include "lib12api3_impl.h"
#include "lib12impl.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api3impl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl16impl4(int a, int b) {
    return a + b;
}

int Lib12Api3Impl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api3Impl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api3Impl16Impl" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api3Impl16Core1 lib12api3impl16core1;
        lib12api3impl16core1.doSomething();
        Lib12Api3Impl16Core2 lib12api3impl16core2;
        lib12api3impl16core2.doSomething();
        Lib12Api3Impl17Api1 lib12api3impl17api1;
        lib12api3impl17api1.doSomething();
        Lib12Api3Impl17Api2 lib12api3impl17api2;
        lib12api3impl17api2.doSomething();
        Lib12Api3Impl17Api3 lib12api3impl17api3;
        lib12api3impl17api3.doSomething();
        visited = 1;
    }
}

