// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl16api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl16api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl16api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl16api34(int a, int b) {
    return a + b;
}

int Lib12Core2Impl16Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl16Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl16Api3" << std::endl;
        Lib12Core2Impl16Impl lib12core2impl16impl;
        lib12core2impl16impl.doSomething();
        Lib12Core2Impl17Api1 lib12core2impl17api1;
        lib12core2impl17api1.doSomething();
        Lib12Core2Impl17Api2 lib12core2impl17api2;
        lib12core2impl17api2.doSomething();
        Lib12Core2Impl17Api3 lib12core2impl17api3;
        lib12core2impl17api3.doSomething();
        visited = 1;
    }
}

