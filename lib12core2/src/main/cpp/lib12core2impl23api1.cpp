// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl23api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl23api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl23api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl23api14(int a, int b) {
    return a + b;
}

int Lib12Core2Impl23Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl23Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl23Api1" << std::endl;
        Lib12Core2Impl24Api1 lib12core2impl24api1;
        lib12core2impl24api1.doSomething();
        Lib12Core2Impl23Impl lib12core2impl23impl;
        lib12core2impl23impl.doSomething();
        Lib12Core2Impl24Api2 lib12core2impl24api2;
        lib12core2impl24api2.doSomething();
        Lib12Core2Impl24Api3 lib12core2impl24api3;
        lib12core2impl24api3.doSomething();
        visited = 1;
    }
}

