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
int lib16api2impl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl16api24(int a, int b) {
    return a + b;
}

int Lib16Api2Impl16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl16Api2" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl16Impl lib16api2impl16impl;
        lib16api2impl16impl.doSomething();
        Lib16Api2Impl17Api1 lib16api2impl17api1;
        lib16api2impl17api1.doSomething();
        Lib16Api2Impl17Api2 lib16api2impl17api2;
        lib16api2impl17api2.doSomething();
        Lib16Api2Impl17Api3 lib16api2impl17api3;
        lib16api2impl17api3.doSomething();
        visited = 1;
    }
}

