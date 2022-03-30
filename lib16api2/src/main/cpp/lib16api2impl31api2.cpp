// GENERATED SOURCE FILE

#include "lib16api2_private.h"
#include "lib16api2_impl.h"
#include "lib16impl.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api2impl31api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl31api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl31api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl31api24(int a, int b) {
    return a + b;
}

int Lib16Api2Impl31Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl31Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl31Api2" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl31Impl lib16api2impl31impl;
        lib16api2impl31impl.doSomething();
        Lib16Api2Impl32Api1 lib16api2impl32api1;
        lib16api2impl32api1.doSomething();
        Lib16Api2Impl32Api2 lib16api2impl32api2;
        lib16api2impl32api2.doSomething();
        Lib16Api2Impl32Api3 lib16api2impl32api3;
        lib16api2impl32api3.doSomething();
        visited = 1;
    }
}

