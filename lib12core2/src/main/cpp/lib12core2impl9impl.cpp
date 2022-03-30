// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl9impl4(int a, int b) {
    return a + b;
}

int Lib12Core2Impl9Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl9Impl" << std::endl;
        Lib12Core2Impl9Core1 lib12core2impl9core1;
        lib12core2impl9core1.doSomething();
        Lib12Core2Impl9Core2 lib12core2impl9core2;
        lib12core2impl9core2.doSomething();
        Lib12Core2Impl10Api1 lib12core2impl10api1;
        lib12core2impl10api1.doSomething();
        Lib12Core2Impl10Api2 lib12core2impl10api2;
        lib12core2impl10api2.doSomething();
        Lib12Core2Impl10Api3 lib12core2impl10api3;
        lib12core2impl10api3.doSomething();
        visited = 1;
    }
}

