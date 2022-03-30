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
int lib12api3impl5impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl5impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl5impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl5impl4(int a, int b) {
    return a + b;
}

int Lib12Api3Impl5Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api3Impl5Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api3Impl5Impl" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api3Impl5Core1 lib12api3impl5core1;
        lib12api3impl5core1.doSomething();
        Lib12Api3Impl5Core2 lib12api3impl5core2;
        lib12api3impl5core2.doSomething();
        Lib12Api3Impl6Api1 lib12api3impl6api1;
        lib12api3impl6api1.doSomething();
        Lib12Api3Impl6Api2 lib12api3impl6api2;
        lib12api3impl6api2.doSomething();
        Lib12Api3Impl6Api3 lib12api3impl6api3;
        lib12api3impl6api3.doSomething();
        visited = 1;
    }
}

