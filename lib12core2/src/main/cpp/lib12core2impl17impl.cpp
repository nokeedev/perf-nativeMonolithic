// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl17impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl17impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl17impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl17impl4(int a, int b) {
    return a + b;
}

int Lib12Core2Impl17Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl17Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl17Impl" << std::endl;
        Lib12Core2Impl17Core1 lib12core2impl17core1;
        lib12core2impl17core1.doSomething();
        Lib12Core2Impl17Core2 lib12core2impl17core2;
        lib12core2impl17core2.doSomething();
        Lib12Core2Impl18Api1 lib12core2impl18api1;
        lib12core2impl18api1.doSomething();
        Lib12Core2Impl18Api2 lib12core2impl18api2;
        lib12core2impl18api2.doSomething();
        Lib12Core2Impl18Api3 lib12core2impl18api3;
        lib12core2impl18api3.doSomething();
        visited = 1;
    }
}

