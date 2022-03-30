// GENERATED SOURCE FILE

#include "lib12core2_impl.h"
#include "lib12core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core24(int a, int b) {
    return a + b;
}

int Lib12Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2" << std::endl;
        Lib12Core2Impl1Api1 lib12core2impl1api1;
        lib12core2impl1api1.doSomething();
        Lib12Core2Impl1Api2 lib12core2impl1api2;
        lib12core2impl1api2.doSomething();
        Lib12Core2Impl1Api3 lib12core2impl1api3;
        lib12core2impl1api3.doSomething();
        visited = 1;
    }
}

