// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl16impl4(int a, int b) {
    return a + b;
}

int Lib12Core2Impl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl16Impl" << std::endl;
        Lib12Core2Impl16Core1 lib12core2impl16core1;
        lib12core2impl16core1.doSomething();
        Lib12Core2Impl16Core2 lib12core2impl16core2;
        lib12core2impl16core2.doSomething();
        Lib12Core2Impl17Api1 lib12core2impl17api1;
        lib12core2impl17api1.doSomething();
        Lib12Core2Impl17Api2 lib12core2impl17api2;
        lib12core2impl17api2.doSomething();
        Lib12Core2Impl17Api3 lib12core2impl17api3;
        lib12core2impl17api3.doSomething();
        visited = 1;
    }
}

