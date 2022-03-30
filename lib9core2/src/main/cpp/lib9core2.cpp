// GENERATED SOURCE FILE

#include "lib9core2_impl.h"
#include "lib9core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core24(int a, int b) {
    return a + b;
}

int Lib9Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2" << std::endl;
        Lib9Core2Impl1Api1 lib9core2impl1api1;
        lib9core2impl1api1.doSomething();
        Lib9Core2Impl1Api2 lib9core2impl1api2;
        lib9core2impl1api2.doSomething();
        Lib9Core2Impl1Api3 lib9core2impl1api3;
        lib9core2impl1api3.doSomething();
        visited = 1;
    }
}

